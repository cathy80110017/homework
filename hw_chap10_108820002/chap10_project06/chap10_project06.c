/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.18                                              */
/* Purpose: chap10.06                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define StackSize 100

int contents[StackSize];
int top = 0;

void make_empty(void){
    top = 0;
}

bool is_empty(void){
     return top == 0;
}

bool is_full(void){
     return top == StackSize;
}

void push(int i){
    if (is_full()){
        stack_overflow();
    }
    else{
        contents[top++] = i;
    }
}

int pop(void){
    if (is_empty()){
        stack_underflow();
    }
    else{
        return contents[--top];
    }
    return '\0';
}

void stack_overflow(void){
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){
    printf("Not enough in expression\n");
    exit(EXIT_FAILURE);
}

int main(void){
    char ch;
    int op1, op2;

    printf("Enter an RPN expression :　");
    for (;;){
        scanf(" %c",&ch);
        switch (ch){
        case '0':case '1':case '2':case '3':case '4':
        case '5':case '6':case '7':case '8':case '9':
            push(ch - '0');                       //輸入數字，然後由字元變數字
            break;
        case '+':
            push(pop() + pop());
            break;
        case '-':
            op1 = pop();
            op2 = pop();
            push(op2 - op1);                      //因為是後減前，所以要設變數
            break;
        case '*':
            push(pop()*pop());
            break;
        case '/':
            op1 = pop();
            op2 = pop();
            push(op2 / op1);                      //因為是後減前，所以要設變數
            break;
        case '=':
            printf("Value of expression: %d\n",pop());
            make_empty();
            printf("Enter an RPN expreesion: ");
            break;
        default:
            exit(EXIT_SUCCESS);                  //如果不是加減乘除或數字則跳出
        }
    }
    
    return 0;
}
