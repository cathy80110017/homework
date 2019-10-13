/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.11                                             */
/* Purpose: chap05-09                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
int main(){
    int month1, day1, year1,
        month2, day2, year2;
    printf("Enter first date(mm/dd/yy):");
    scanf("%d/%d/%d",&month1,&day1,&year1);
    printf("\nEnter second date(mm/dd/yy):");
    scanf("%d/%d/%d",&month2,&day2,&year2);

    for (int i = 0; i < 3; i++){
        if (year1>year2){
            printf("%d/%d/%d is earlier than %d/%d/%d",month1,day1,year1,month2,day2,year2);
            break;
        }
        else if(year2>year1){
            printf("%d/%d/%d is earlier than %d/%d/%d",month2,day2,year2,month1,day1,year1);
            break;
        }
        
        
    }
        

    return 0;
}