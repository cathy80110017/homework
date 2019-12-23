/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.15                                              */
/* Purpose: chap 12.01                                           */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>

int main(){

    char message[100];
    char c, *p = message;

    printf("Enter a message: ");

    c = getchar();          //input
    while (c != '\n'){
        *p = c;
        p++;
        c = getchar();      //input
    }
    printf("Reversal is:");

    while (p != message-1){
        printf("%c",*p);    //output
        p--;
    }
    printf("\n");           //output
}