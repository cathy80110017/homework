/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.10.10                                             */
/* Purpose: 05-08                                                */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int min, sec;
    int timetable[2][8]={{480,583,679,767,840,945,1140,1305},       //用二維陣列存班表
                        {616,712,811,900,968,1075,1280,1438}};
    printf("Enter a 24-hours time :");
    scanf("%d:%d",&min,&sec);                                       //輸入
    sec=min*60+sec;
    int num, time=1440;
    for (int i = 0; i < 8; i++){
        if(abs(timetable[0][i]-sec)<time){
            time=abs(timetable[0][i]-sec);                          //用絕對值找誰最靠近，   
            num=i;                                                  //由於題目沒說明隔天，我將以每天的班表都一樣下去寫
        }
    }
    if (timetable[0][num]/60<12){
        printf("Closest departure time is %02d:%02d a.m., ",timetable[0][num]/60,timetable[0][num]%60);         //前半段12點前輸出
    }
    else if (timetable[0][num]/60==12){
        printf("Closest departure time is %02d:%02d p.m., ",(timetable[0][num]/60),timetable[0][num]%60);         //前半段12點輸出
    }
    else{
        printf("Closest departure time is %02d:%02d p.m., ",(timetable[0][num]/60)-12,timetable[0][num]%60);       //前半段12點後輸出
    }

    if (timetable[1][num]/60<12){
        printf("arriving at %02d:%02d a.m.\n",timetable[1][num]/60,timetable[1][num]%60);         //後半段12點前輸出
    }
    else if (timetable[1][num]/60==12){
        printf("Closest departure time is %02d:%02d p.m., ",(timetable[1][num]/60),timetable[1][num]%60);         //後半段12點輸出
    }
    else{
        printf("arriving at %02d:%02d p.m.\n",(timetable[1][num]/60)-12,timetable[1][num]%60);         //後半段12點後輸出
    }
    return 0;
}