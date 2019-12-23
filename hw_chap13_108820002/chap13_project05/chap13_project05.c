/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.21                                              */
/* Purpose: chap 13.05                                           */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
    int i, sum = 0;
    for (i = 1; i < argc; i++){
        sum += atoi(argv[i]);   //atoi是讓char轉int
    }
    printf("Total : %d\n", sum);
    return 0;
}