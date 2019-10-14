/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.11                                              */
/* Purpose: chap05-10                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
int main(){
    int a;
    printf("Enter numerical grade : ");
    scanf("%d",&a);                         //輸入
    if ((a>100)||(a<0)){
        printf("Error\n");                  //輸出錯誤
    }
    else{
        switch (a/10){
        case 10:
        case 9:
            printf("Letter grade: A\n");                         //輸出A
            break;
        case 8:
            printf("Letter grade: B\n");                         //輸出B
            break;
        case 7:
            printf("Letter grade: C\n");                         //輸出C
            break; 
        case 6:
            printf("Letter grade: D\n");                         //輸出D
            break;   
        default:
            printf("Letter grade: F\n");                         //輸出F
            break;
        }        
    }
    return 0;
}