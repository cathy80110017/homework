/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.29                                             */
/* Purpose: chap09.06                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<string.h>

// int pow_2(int num, int x){
//     for (int i = 0; i < x; i++){
//         num = num * num;
//     }
//     return num;
// }

int polynomial(int num){        //為什麼不讓我用pow...
    num = 3*num*num*num*num*num + 2*num*num*num*num - 5*num*num*num - num*num + 7*num - 6; 
    return num;
}

int main(){
    int num;

    printf("Enter an interger: ");
    scanf("%d",&num);       //輸入
    printf("Result: %d\n", polynomial(num));    //輸出
    return 0;
}
