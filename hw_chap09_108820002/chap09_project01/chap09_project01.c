/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.04                                               */
/* Purpose: chap 09.01                                                */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int selection_sort(int *arr, int a){
    for (int i = 0; i < a; i++){
        int min = arr[i], num = i;
        for (int j = i; j < a; j++){
            if (arr[j] < min){
                num = j;
                min = arr[j];
            }
        }
        
    }
    
}

int main(){
    int arr[100], i = 0;
    printf("Enter list of intergers to be sorted: ");
    while (scanf("%d",&arr[i]) != '\n'){
        i++;
    }
    selection_sort(arr, i);

    printf("Sorted list: ");
    for (int n = 0; n < i ; n++){
        printf("%d",arr[n]);
    }
    
    return 0;
}