/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.05                                              */
/* Purpose: chap9.07                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>       //寫完收工學Vue.js去啦


int multi(int x, int n){
    
    int i = 0;

    if (n == 0){
        return 1;       //n的0次方=1
    }
    if (n%2 == 0){
        i = multi(x, n/2);
        return i*i;
    }
    else{
        return x*multi(x, n-1);
    }
    

}

int main(){
    
    int x, n;
    printf("for x^n, enter x: ");   //字母的序排並一不定會影閱響讀
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);

    printf("%d^%d = %d\n", x, n, multi(x,n));   //輸出

    return 0;
}