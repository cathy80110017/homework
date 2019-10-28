/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.11                                              */
/* Purpose: chap05-10                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
int main(){
    float e = 0.0f, denom=1;
    for (int i = 1; i < 11; i++){
        e = e + 1/denom;
        denom = denom*i;
    }
    printf("Approximation of e: %f\n",e);
    return 0;
}