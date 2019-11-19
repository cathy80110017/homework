/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.18                                              */
/* Purpose: chap 10.01                                           */
/* Change History: log the change history of the program         */
/*****************************************************************/

//一時抄程式碼一時爽，一直抄程式碼一直爽

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define StackSize 100

char contents[StackSize];   //stack大小100
int top = 0;                //剛開始是0

void make_empty(void){      //空的時候，開始是0
    top = 0;
}

char is_empty(void){        //讓你判斷是不是空的
     return top == 0;
}

char is_full(void){        //讓你判斷是不是滿的
     return top == StackSize;
}

void push(char ch){        //就是push不解釋
    if (is_full()){
        stack_overflow();
    }
    else{
        contents[top++] = ch;
    }
}

char pop(void){            //就是pop不解釋
    if (is_empty()){
        stack_underflow();
    }
    else{
        return contents[--top];
    }
    return '\0';
}

void stack_overflow(void){      //如果overflow輸出
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){      //如果underflow輸出
    printf("stack underflow\n");
    exit(EXIT_FAILURE);
}

int main(){

    bool properly_nested = true;
    char ch;
    printf("Enter parentheses and/or braces : ");
    while (properly_nested && (ch = getchar()) != '\n'){
        if (ch == '(' || ch == '{'){
            push(ch);
        }
        else if(ch == ')'){
            properly_nested = (pop() == '(');       //這裡範例程式碼寫錯耶，會多判斷一次是否empty
        }
        else if (ch == '}'){
            properly_nested = (pop() == '{');       //這裡範例程式碼寫錯耶，會多判斷一次是否empty
        }
    }
    
    if (properly_nested && is_empty()){
        printf("Parenthese/braces are nested properly\n");
    }
    else{
        printf("Parenthese/braces are NOT nested properly\n");
    }

    return 0;
}