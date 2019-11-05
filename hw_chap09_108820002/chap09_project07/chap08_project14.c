/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.05                                              */
/* Purpose: chap08-14                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
int main(){
    

    int count = 5;
    int arr[5][5], row[5] = {0}, column[5] = {0};
    int i = 0, j = 0;

    for ( i = 0; i < count; i++){
        printf("Enter row %d : ", i+1);
        for ( j = 0; j < count; j++){           //輸入
            scanf("%d",&arr[i][j]);
            row[i] = row[i] + arr[i][j];        //每輸入一個，橫排累加
            
        }
        for ( j = 0; j < count; j++){
            column[j] = column[j] + arr[i][j];  //直排累加
        } 
    }

    printf("Row totals: ");                     //輸出ROW
    for (i = 0; i < count; i++){
        printf("%d ", row[i]);
    }
    printf("\nColumn totals: ");                //輸出Column
    for (i = 0; i < count; i++){
        printf("%d ", column[i]);
    }
    printf("\n");

    return 0;
}