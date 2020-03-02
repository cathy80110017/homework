/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.04                                            */
/* Purpose: 08-06                                           */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char message[1000] = {0};
    printf("Enter message : ");
    scanf("%s",message);                //輸入

    int i = 0;

    printf("In BIFF-speak: ");

    while (message[i] != 0){
        if (message[i] == 'A'){        //判斷
            printf("4");
        }
        else if (message[i] == 'B'){        //判斷
            printf("8");
        }
        else if (message[i] == 'E'){        //判斷
            printf("3");
        }
        else if (message[i] == 'i'){        //判斷
            printf("1");
        }
        else if (message[i] == 'O'){        //判斷
            printf("0");
        }
        else if (message[i] == 'S'){        //判斷
            printf("5");
        }
        else{
            printf("%c",message[i]);
        }
        i++;
    }
    
    printf("!!!!!!!!!!!\n");

    return 0;
} 