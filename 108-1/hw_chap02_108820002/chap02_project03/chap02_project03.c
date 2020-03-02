/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                       */
/* ID: 108820002                       */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: 2-3                     */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int r=0;
    printf("Enter radius: ");
    scanf("%d",&r);                     //input
    float sphere=pow(r,3)*3.14*4/3;
    printf("\nSphere volume: %.2f ",sphere);    //output
    return 0;
}
