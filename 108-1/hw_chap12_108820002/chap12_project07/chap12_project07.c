/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.15                                              */
/* Purpose: chap12.07                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>   //所以為什麼不讓我用sort呢...

void max_min(int a[], int n, int *max, int *min){
    
    int *p;
    *max = *min = *a;
    for (p = a; p < a + n; p++){
        if (*p > *max){
            *max = *p;
        }else if (*p < *min){
            *min = *p;
        }
    }
}

int main(void){
    int b[10], i, big, small;

    printf("Enter 10 numbers: ");

    for ( i = 0; i < 10; i++){
        scanf("%d", &b[i]);             //input
    }
    
    max_min(b, 10, &big, &small);

    printf("Largest : %d\n", big);      //output
    printf("Smallest: %d\n", small);    //output
}