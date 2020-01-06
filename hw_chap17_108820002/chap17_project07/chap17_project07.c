/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2020.01.04                                              */
/* Purpose: chap17. 07                                           */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

struct vstring{
    int len;
    char chars[];
};

int read_line(char str[], int n);

int main(void){

    struct vstring *reminders[MAX_REMIND];
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);     //讀入時間
        if (day == 0)
            break;

        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++){
            if (strcmp(day_str, reminders[i]->chars) < 0)
                break;            
        }

        for (j = num_remind; j > i; j--){
            reminders[j] = reminders[j-1];            
        }

        //題目裡少打一個 struct 喔喔
        reminders[i] = (struct vstring *)malloc(sizeof(struct vstring) + 2 + strlen(msg_str));
        if (reminders[i] == NULL) {
            printf("-- No space left --\n");
            break;
        }
        reminders[i]->len = 2 + strlen(msg_str);
        memcpy(reminders[i]->chars, day_str, 2);
        memcpy(reminders[i]->chars + 2, msg_str, strlen(msg_str));

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++){
        printf(" %*s\n", reminders[i]->len, reminders[i]->chars);        
    }

    return 0;
}

//讀入事情
int read_line(char str[], int n){
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

