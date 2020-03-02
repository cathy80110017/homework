#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "stack.h"

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
