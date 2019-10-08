/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: ³¯¨Î§u                        */
/* ID: 108820002                       */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: 2-4                      */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
int main(){
    float money;
    printf("Enter the amount: ");  //input
    scanf("%f",&money);
    printf("With tax added: $%.2f",money*1.05f); //output
    return 0;
}
