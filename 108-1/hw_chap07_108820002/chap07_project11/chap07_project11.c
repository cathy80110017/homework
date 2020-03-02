/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.29                                             */
/* Purpose: chap07-11                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter a first and last name : ");

    char first[100], last[100];

    scanf("%s",first);      //輸入
    scanf("%s",last);

    printf("%s, %c.\n",last,first[0]);  //輸出

    return 0;
}
