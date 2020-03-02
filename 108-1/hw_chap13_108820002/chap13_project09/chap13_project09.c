/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.15                                              */
/* Purpose: chap12.02                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int compute_vowel_count(const char *sentence){
    int num_vowels = 0;
    while (*sentence != '\n'){           //判斷還沒到換行符號時，不斷讀入
        switch (toupper(*sentence++)){
        case 'A': case 'E': case 'I': case 'O': case 'U':
            num_vowels++;
        }
    }
    return num_vowels;
}
int read_line(char str[], int n){
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){   //input
        if(i < n){
            str[i++] = ch;              //存入陣列
        }
    }
    str[i] = '\n';                      //最後加換行符號，來當作結束
    return i;
}


int main(void){
    char sentence[100];

    printf("Enter a sentence: ");

    read_line(sentence, 100);

    printf("Your sentence contains %d vowels. \n", compute_vowel_count(sentence));

    return 0;
}