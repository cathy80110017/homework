/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.05                                             */
/* Purpose: chap08-09                                           */
/* Change History: log the change history of the program         */
/*****************************************************************/
/* 碰到邊界，被包圍 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
    
    char arr[10][10];
    srand(time(0));

    memset(arr, '.', 100*sizeof(char));         //初始陣列為 . 
    char letter = 'A';                          //第一個是A
    int x = 0, y = 0, new_x = 0, new_y = 0, direction = 0, move = 0;
    arr[x][y] = letter++;
    direction = rand() % 4;
    while (move < 4 && letter <= 'Z'){          //4個方向都檢查一次，z之前都要跑
        switch ((direction + move)%4){
        case 0:
            new_y = y - 1;
            break;
        case 1:
            new_y = y + 1;
            break;
        case 2:
            new_x = x - 1;
            break;
        case 3:
            new_x = x + 1;
            break;
        }
        if (new_x >= 0 && new_y >= 0 && new_x < 10 && new_y < 10 && arr[new_x][new_y] == '.' ){
            x = new_x;
            y = new_y;
            arr[x][y] = letter++;
            direction = rand() % 4;
            move = 0;
        }
        else{
            move++;
            new_x = x;
            new_y = y;
        }
        
    }

    for (int i = 0; i < 10; i++){       //輸出
        for (int j = 0; j < 10; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}