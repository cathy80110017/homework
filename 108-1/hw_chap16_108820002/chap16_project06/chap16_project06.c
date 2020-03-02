/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.30                                              */
/* Purpose: chap16.06                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>

struct date{
    int month, day, year;
};

int compare_dates(struct date d1, struct date d2){
    if (d1.year != d2.year){
        return d1.year < d2.year ? -1 : 1;  //為什麼要用這冷門的東西呢...
    }
    if (d1.month != d2.month){
        return d1.month < d2.month ? -1 : 1;    //如果 d1 < d2 則 -1，不然則是 1
    }
    if (d1.day != d2.day){
        return d1.day < d2.day ? -1 : 1;
    }

    return 0;
}

void put_date(struct date d){
    printf("%d/%d/%.2d",d.month, d.day, d.year);
}

int main(void){
    struct date d1,d2;

    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);    //輸入 first date
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);    //輸入 second date

    if (compare_dates(d1, d2) < 0){
        put_date(d1);
        printf(" is earlier then ");
        put_date(d2);
        printf("\n");
    }else{
        put_date(d2);
        printf(" is earlier then ");
        put_date(d1);
        printf("\n");
    }
    
    return 0;
}
