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
    int date[3][2];       // year, month, day,
    printf("Enter first date(mm/dd/yy):");
    scanf("%d/%d/%d",&date[1][0],&date[2][0],&date[0][0]);      //輸入m1/d1/y1
    printf("\nEnter second date(mm/dd/yy):");
    scanf("%d/%d/%d",&date[1][1],&date[2][1],&date[0][1]);      //輸入m2/d2/y2

    for (int i = 0; i < 3; i++){
        if (date[i][0]<date[i][1]){
            printf("%02d/%02d/%02d is earlier than %d/%d/%d\n",date[1][0],date[2][0],date[0][0],date[1][1],date[2][1],date[0][1]); //輸出
            break;
        }
        else if(date[i][0]>date[i][1]){
            printf("%02d/%02d/%02d is earlier than %d/%d/%d\n",date[1][1],date[2][1],date[0][1],date[1][0],date[2][0],date[0][0]); //輸出
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}