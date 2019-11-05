/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.29                                              */
/* Purpose: chap07-15                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
int main(){
    
    int count;

    short s_fact = 1;
    int i_fact = 1;
    long l_fact = 1;
    long long ll_fact = 1;
    float f_fact = 1;
    double d_fact = 1;
    long double ld_fact= 1;

    printf("Enter a positive integer : ");
    scanf("%d",&count);                     //輸入

    for (int i = 2; i <= count; i++){       //階乘
        s_fact = s_fact * i;
        i_fact = i_fact * i;
        l_fact = l_fact * i;
        ll_fact = ll_fact * i;
        f_fact = f_fact * i;
        d_fact = d_fact * i;
        ld_fact = ld_fact * i;
    }
    
    printf("Factorial of %d (short): %i\n", count, s_fact);          //輸出
    printf("Factorial of %d (int): %d\n", count, i_fact);            //輸出
    printf("Factorial of %d (long): %li\n", count, l_fact);          //輸出
    printf("Factorial of %d (long long): %lli\n", count, ll_fact);   //輸出
    printf("Factorial of %d (float): %f\n", count, f_fact);          //輸出
    printf("Factorial of %d (double): %lf\n", count, d_fact);        //輸出
    printf("Factorial of %d (long double): %llf\n", count, ld_fact); //輸出

    return 0;
}