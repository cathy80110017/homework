/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.20                                              */
/* Purpose: chap13.09                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void reserve_name(char *name){
    char fi[5]; //存 first name 的頭字，跟 Last name
    char *p = name;

    while (*p == ' '){
        p++;
    }
    sprintf(fi, ", %c.", *p);       //格式化

    while (*p != ' '){
        p++;
    }
    while (*p == ' '){
        p++;
    }
    while (*p != ' ' && *p != '\0'){
        *name++ = *p++;
    }
    strcpy(name, fi);       //複製字串
}
int read_line(char str[], int n){
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){       //input
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int main(void){
    
    char name[50];

    printf("Enter the first and last name: ");
    read_line(name, 50);

    reserve_name(name);
    printf("%s\n", name);
}