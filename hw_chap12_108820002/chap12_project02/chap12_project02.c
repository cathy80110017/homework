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

int main(){

    char msg[100], ch, *p, *q = &msg[0];
    printf("Enter a message:");
    while (q < &msg[100]){                   //所以如果有標點符號呢...?
        if ((ch = getchar()) == '\n'){       //如果換行則break
            break;
        }
        if (isalpha(ch)){                    //如果是字則讀入
            *q++ = toupper(ch);
        }
    }
    
    for (p = &msg[0], q--; p < q; p++, q--){
        if (*p != *q){
            break;
        }
    }
    
    if (p >= q){
        printf("Palindrome\n");     //output
    }else{
        printf("Not a palindrome\n");     //output
    }
}