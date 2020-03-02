/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2020.01.04                                              */
/* Purpose: chap17.06                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<string.h>

#define Max_words 50
#define Word_len 20

//讀字
int read_line(char str[], int n){
    int ch, i = 0;
    while((ch = getchar()) != '\n'){
        if (i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    
    return i;
}

//增加了這個，一樣神奇的寫法
int compare_strings(const void *p, const void *q){
    return strcmp(*(char **)p, *(char **)q);
}

int main(void){

    char *words[Max_words], word[Word_len+1];
    int i, num_words = 0;

    for (;;){
        if (num_words == Max_words){
            printf(" -- No space left --\n");
            break;
        }
        printf("Enter word: ");
        read_line(word, Word_len);
        if (strlen(word) == 0)      //如果什麼都沒有就跳出
            break;

        words[num_words] = (char *)malloc(strlen(word) + 1);
        if (words[num_words] == NULL){
            printf(" -- No space left --\n");
            break;
        }

        strcpy(words[num_words], word);
        num_words++;
    }
    qsort(words, num_words, sizeof(char *), compare_strings);   //這裡改用qsort

    printf("\nIn sorted order:");
    for (i = 0; i < num_words; i++){
        printf(" %s", words[i]);
    }
    printf("\n");

    return 0;
}