/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: ³¯¨Î§u (put your name here)                              */
/* ID: 108820002 (your student ID here)                          */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: description of program function                      */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
int main(){
    int item_number, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d",&item_number);       //input item number

    printf("Enter unit price: ");
    scanf("%f",&unit_price);        //input unit price

    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);        //input date

    printf("\nItem\tUnit\tPurchase");
    printf("\n\tPrice\tDate");
    printf("\n%d\t$%.2f\t%02d/%02d/%d",item_number,unit_price,month,day,year);     //output

    return 0;
}
