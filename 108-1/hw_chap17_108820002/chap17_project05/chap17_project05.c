/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2020.01.04                                              */
/* Purpose: chap17.05                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_words 50
#define Word_len 20
//我覺得這題的問題是，word跟words的大找碴

//讀字
int read_line(char str[], int n){
    int ch, i = 0;
    while((ch = getchar()) != '\n'){
        if (i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    
    return i;
}

//超神奇寫法...? 其實沒有很懂呢
char **split(char **low, char **high){
    char *part_element = *low;
    for(;;)
    {
        while(low < high && strcmp(part_element, *high) <= 0)
           high--;
        if(low >= high)
            break;
        *low++ = *high;

        while(low < high && strcmp(*low, part_element) <= 0)
            low++;
        if(low >= high)
            break;
        *high-- = *low;
    }

    *high = part_element;
    return high;
}

//quicksort
void quicksort(char **low, char **high){                   
   char **middle;

   if (low >= high) return;
   middle = split(low, high);  
   quicksort(low, middle - 1);
   quicksort(middle + 1, high);
}

int main(void){

    char *words[Max_words], word[Word_len+1];
    int i, num_words = 0;

    for (;;){
        if (num_words == Max_words){
            printf(" -- No space left --\n");
            break;
        }
        printf("Enter word: ");
        read_line(word, Word_len);
        if (strlen(word) == 0)      //如果什麼都沒有就跳出
            break;
        words[num_words] = (char *)malloc(strlen(word) + 1);
        if (words[num_words] == NULL){
            printf(" -- No space left --\n");
            break;
        }

        strcpy(words[num_words], word);
        num_words++;
    }
    quicksort(words, words + num_words - 1);

    printf("\nIn sorted order:");
    for (i = 0; i < num_words; i++){
        printf(" %s", words[i]);
    }
    printf("\n");

    return 0;
}