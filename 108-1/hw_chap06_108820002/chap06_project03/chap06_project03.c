/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.10                                             */
/* Purpose: 05-08                                                */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int num, a, b;
    printf("Enter a fraction: ");
    scanf("%d/%d",&a,&b);       //input
    int i=2;

    while((i <= a)&&(i <= b)){
        if ((a%i == 0) && (b%i == 0)){
            a=a/i;                          //約分
            b=b/i;
        }
        i++;
    }        

    printf("In lowest terms:%d/%d\n",a,b);  //output
    return 0;
}