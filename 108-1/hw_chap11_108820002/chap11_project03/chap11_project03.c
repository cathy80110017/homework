/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.26                                              */
/* Purpose: chap11.03                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

//我相信這可以過啦

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void reduce(int *i, int *a, int *b){          //我有用指標喔喔喔

    while((*i <= *a)&&(*i <= *b)){
        while ((*a % *i == 0) && (*b % *i == 0)){
            *a = *a /(*i);                          //約分
            *b = *b /(*i);
        }
        (*i)++;
    }
}

int main(){
    int num1 = 1, num2 = 1, a, b;
    printf("Enter a fraction: ");
    scanf("%d/%d",&a,&b);       //input
    int i=2;   

    if (a < 0 && b < 0){
        a = abs(a);
        b = abs(b);
    }
    else if (a < 0){
        num1 = -1;
        a = abs(a);
    }
    else if (b < 0){
        num2 = -1;
        b = abs(b);
    }

    reduce(&i, &a, &b);

    a = a*num1;
    b = b*num2;

    printf("In lowest terms:%d/%d\n",a,b);  //output
    return 0;
}