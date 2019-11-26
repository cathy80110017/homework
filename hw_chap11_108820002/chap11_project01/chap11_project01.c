/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.26                                              */
/* Purpose: chap 11.01                                           */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>

void pay_amount(int *money){              //我有用指標喔喔喔

    printf("$20 bills: %d\n", *money/20); //output of 20$
    *money = *money-20*(*money/20);

    printf("$10 bills: %d\n",*money/10); //output of 10$
    *money = *money-10*(*money/10);

    printf("$5 bills: %d\n",*money/5); //output of 5$
    *money = *money-5*(*money/5);

    printf("$1 bills: %d\n", *money); //output of 1$

}

int main(){

    int money = 0;
    printf("Enter a dollar amount: "); //input
    scanf("%d",&money);

    pay_amount(&money);     //我相信這可以過啦

}
