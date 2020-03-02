/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.11                                             */
/* Purpose: chap05-09                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("The reversal is : ");
    while (n > 0){
        printf("%d", n%10);
        n = n/10;
    }
    return 0;
}
