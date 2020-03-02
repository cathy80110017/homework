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
//#include<algorithm> sort()
// void selection_sort(int arr[100], int a){
// for (int i = 0; i < a; i++){
//     int min = arr[i], num = i;       //min預設為開始找的數
//     for (int j = i; j < a; j++){
//         if (arr[j] < min){           //如果找到比min小的
//             num = j;                 //存在第幾個找到的
//             min = arr[j];            //更改min
//         }
//     }
//     arr[num] = arr[i];
//     arr[i] = min;
// }
//}


void selection_sort(int arr[100], int a){
    if (a == 0)
        return;
    
    int i, max = arr[a], num = a;       //max預設為開始找的數
    for (i = a; i >= 0 ; i--){
        if (arr[i] > max){              //如果找到比max大的
            num = i;                    //存在第幾個找到的
            max = arr[i];               //更改max
        }
    }
    arr[num] = arr[a];
    arr[a] = max;
    return selection_sort(arr, a-1);
}

int main(){
    int arr[100], i = 0, c, n = 0;
    printf("Enter list of intergers to be sorted: ");
    for (i = 0; i < 100; i++){          //輸入
        scanf("%d",&arr[i]);
        n++;
        if ((c = getchar()) == '\n'){
            break;
        }
        ungetc(c, stdin);
    }
    
    selection_sort(arr, n);         //呼叫

    printf("Sorted list: ");
    for (i = 0; i < n ; i++){
        printf("%d ",arr[i]);       //輸出
    }
    printf("\n");
    return 0;
}