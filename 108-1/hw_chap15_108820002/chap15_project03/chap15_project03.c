/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.25                                              */
/* Purpose: chap15.03                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int main(){
    
    int n[20], num = 10, i = 1;

    printf("Enter %d numbers to be sorted: ", num);
    for (i = 1; i <= num; i++){
        scanf("%d", &n[i]);               //輸入陣列
    }

    quicksort(n, 1, num);                 //呼叫sort,給開頭(1)跟結尾(count)
    
    printf("In sorted order: ");
    for (i = 1; i <= num; i++){
        printf("%d ",n[i]); 
    }
    printf("\n");        

    return 0;
}