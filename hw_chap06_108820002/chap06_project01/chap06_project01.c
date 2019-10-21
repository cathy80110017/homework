/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.17                                              */
/* Purpose: chap06-01                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
#include<string.h>
int main(){
    float x, max = 0.0f;
    for (;;){
        printf("Enter a number : ");
        scanf("%f",&x);         //input

        if (x == 0)
            break;
        if (x > max)
            max = x;
    }

    printf("\n");
    printf("The largest number entered was %g\n", max);    //output
    
    return 0;
}