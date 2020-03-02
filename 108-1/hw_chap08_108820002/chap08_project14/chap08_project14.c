/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.05                                              */
/* Purpose: chap08-14                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char ch, sentence[100] = {' '}, terminator = '.';
    int i = 0, start, finish;

    printf("Enter a sentence : ");
    for (i = 1; i < 100; i++){
        ch = getchar();                 //輸入
        if (ch == '.'  || ch == '?' || ch == '!'){  //如果遇標點符號則跳出
            terminator = ch;
            break;
        }
        sentence[i] = ch;
    }

    printf("Reversal of sentence :");
    finish = i;
    for (start = finish - 1; start >= 0; start--){
        if (sentence[start] == ' '){
            for (int j = start; j < finish; j++){
                putchar(sentence[j]);
            }
            finish = start;            
        }
    }
    printf("%c\n", terminator);         //輸出標點佛號
    
    return 0;
}