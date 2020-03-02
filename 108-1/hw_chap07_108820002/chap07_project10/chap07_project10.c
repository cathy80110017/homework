/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.29                                             */
/* Purpose: 07-10                                                */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char arr;
    int a = 0;
    printf("Enter a sentience : ");
    
    while ((arr = getchar()) != '\n'){      //輸入，如果不等於換行
        arr = toupper(arr);
        if ((arr == 'A')||(arr == 'E')||(arr == 'I')||(arr == 'O')||(arr == 'U')){  //如果有母音
            a++;
        }
    }
    
    printf("%d\n",a);

    return 0;
}