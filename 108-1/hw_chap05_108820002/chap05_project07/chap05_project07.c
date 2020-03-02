/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.08                                              */
/* Purpose: chap05-07                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
int main(){
    int n[4];
    int max, min;
    int count=4;
    printf("Enter four integers : ");
    for (int i = 0; i < count; i++){
        scanf("%d",&n[i]);              //迴圈輸入
    }
    max=n[0];
    min=n[0];                               
    for (int i = 0; i < count; i++){
        if(n[i]>max){
            max=n[i];                   //找最大
        }
        if (n[i]<min){
            min=n[i];                   //找最小
       }
    }
    printf("Largest: %d\n",max);        //輸出最大
    printf("Smallest: %d\n",min);       //輸出最小
    return 0;
}