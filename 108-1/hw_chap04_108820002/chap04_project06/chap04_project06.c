/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.09.020                                             */
/* Purpose: 04-06                                                */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
int main(){
    int d[12],i,sum1=0,sum2=0,sum;
    printf("Enter the first 12 digits of an EAN : ");
    for (i = 0; i < 12; i++){
        scanf("%1d",&d[i]);     //input
    }
    sum1=d[0]+d[2]+d[4]+d[6]+d[8]+d[10];
    sum2=d[1]+d[3]+d[5]+d[7]+d[9]+d[11];
    sum=sum1*3+sum2;
    printf("check digit : %d\n",10-sum%10);        //output

    return 0;
}