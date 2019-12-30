/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.29                                              */
/* Purpose: chap16.01                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>     //再多的 Warning，也都是假的
#include <string.h>     //只有 Error 是真的

#define LEN(x) ((int) (sizeof((x)) / sizeof((x)[0])))

const struct{
    const char *country;
    int *code;
} country_codes[] = 
    {{"Argentina",            54}, {"Bangladesh",     889},
     {"Brazil",               55}, {"Burma (Myanmar)", 95},
     {"China",                86}, {"Columbia",        57},
     {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
     {"Ethiopia",            251}, {"France",          33},
     {"Germany",              49}, {"India",           91},
     {"Indonesia",            62}, {"Iran",            98},
     {"Italy",                39}, {"Japan",           81},
     {"Mexico",               52}, {"Nigeria",        234},
     {"Pakistan",             92}, {"Philippines",     63}, 
     {"Poland",               48}, {"Russia",           7},
     {"South Africa",         27}, {"South Korea",     82},
     {"Spain",                34}, {"Sudan",          249},
     {"Thailand",             66}, {"Turkey",          90}, 
     {"Ukraine",             380}, {"United Kingdom",  44},
     {"United States",         1}, {"Vietnam",         84}};

int main(void){
    int c, i = 0, j = LEN(country_codes);

    printf("Enter an international dialing code: ");
    scanf("%d", &c);            //input

    while (i < j){
        if (c == country_codes[i].code){
            printf("%d is the code for %s\n", country_codes[i].code, country_codes[i].country);
            return 0;   //如果找到直接跳出
        }
        else{
            i++;
        }
    }

    printf("Error: %d is not a valid country code\n", c);
    return 0;
}