/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: xxx (put your name here)                              */
/* ID: 108820xxx (your student ID here)                          */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: 2-7                     */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int money=0;
    printf("Enter a dollar amount: "); //input
    scanf("%d",&money);

    printf("$20 bills: %d\n",money/20); //output of 20$
    money=money-20*(money/20);

    printf("$10 bills: %d\n",money/10); //output of 10$
    money=money-10*(money/10);

    printf("$5 bills: %d\n",money/5); //output of 5$
    money=money-5*(money/5);

    printf("$1 bills: %d\n",money); //output of 1$
}
