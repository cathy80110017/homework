/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.15                                              */
/* Purpose: chap13.18                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>

int main(void){

    int m, d, y;
    char *month[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &m, &d, &y);  //input
    printf("You entered the date %s %.2d, %d\n", month[(m - 1) % 12], d, y); //output

}