/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.27                                            */
/* Purpose: 07-04                                             */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){

    printf("Enter phone number : ");

    char c;

    while (scanf("%c",&c) != '\n'){                     //輸入如果還沒換行

        if ((c == 'A')||(c == 'B')||(c == 'C'))         //判斷
            printf("2");
        else if ((c == 'D')||(c == 'E')||(c == 'F'))    //判斷
            printf("3");
        else if ((c == 'G')||(c == 'H')||(c == 'I'))    //判斷
            printf("4");
        else if ((c == 'J')||(c == 'K')||(c == 'L'))    //判斷
            printf("5");
        else if ((c == 'M')||(c == 'N')||(c == 'O'))    //判斷
            printf("6");
        else if ((c == 'P')&&(c == 'R')||(c == 'S'))    //判斷
            printf("7");
        else if ((c == 'T')||(c == 'U')||(c == 'V'))    //判斷
            printf("8");
        else if ((c == 'W')||(c == 'X')||(c == 'Y'))    //判斷
            printf("9");
        else
            printf("%c",c);

    }
    return 0;
} 