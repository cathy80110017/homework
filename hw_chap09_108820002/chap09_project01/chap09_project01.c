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

void selection_sort(int arr[100], int a){
    for (int i = 0; i < a; i++){
        int min = arr[i], num = i;  //min預設為開始找的數
        for (int j = i; j < a; j++){
            if (arr[j] < min){      //如果找到比min小的
                num = j;            //存在第幾個找到的
                min = arr[j];       //更改min
            }
        }
        arr[num] = arr[i];
        arr[i] = min;
    }

}

int main(){
    int arr[100], i = 0, c, n = 0;
    printf("Enter list of intergers to be sorted: ");
    for (i = 0; i < 100; i++){
        scanf("%d",&arr[i]);
        n++;
        if ((c = getchar()) == '\n'){
            break;
        }
        ungetc(c, stdin);
    }
    
    selection_sort(arr, n);

    printf("Sorted list: ");
    for (i = 0; i < n ; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}