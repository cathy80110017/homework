/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.26                                              */
/* Purpose: chap11.04                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

//我相信這可以過啦

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define Num_Ranks 13
#define Num_Suits 4
#define Num_cards 5

void read_card(int num_in_rank[], int num_in_suit[]){
    bool card_exists[Num_Ranks][Num_Suits];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int card_read = 0;

    for (rank = 0; rank < Num_Ranks; rank++){
        num_in_rank[rank] = 0;
        for (suit = 0;suit < Num_Suits; suit++){
            card_exists[rank][suit] = false;
        }
    }
    
    for (suit = 0; suit < Num_Suits; suit++){
        num_in_suit[suit] = 0;
    }
    
    while (card_read < Num_cards){
        bad_card = false;

        printf("Enter a card : ");

        rank_ch = getchar();        //輸入數字
        switch (rank_ch){           //判斷是數字
            case '0':               exit(EXIT_SUCCESS);
            case '2':               rank = 0;   break;
            case '3':               rank = 1;   break;
            case '4':               rank = 2;   break;
            case '5':               rank = 3;   break;
            case '6':               rank = 4;   break;
            case '7':               rank = 5;   break;
            case '8':               rank = 6;   break;
            case '9':               rank = 7;   break;
            case 't': case 'T':     rank = 8;   break;
            case 'j': case 'J':     rank = 9;   break;
            case 'q': case 'Q':     rank = 9;   break;
            case 'k': case 'K':     rank = 10;   break;
            case 'a': case 'A':     rank = 11;   break;
            default:                bad_card = true;    //不是合法的數字
        }

        suit_ch = getchar();        //輸入符號
        switch (suit_ch){           //判斷符號
        case 'c': case 'C':         suit = 0; break;
        case 'd': case 'D':         suit = 1; break;
        case 'h': case 'H':         suit = 2; break;
        case 's': case 'S':         suit = 3; break;
        default: bad_card = true;   //不是合法的花色
        }

        while ((ch = getchar()) != '\n'){
            if (ch != ' ')      bad_card = true;
        }
        
        if (bad_card){
            printf("Bad card: ignored. \n");
        }
        else if (card_exists[rank][suit]){
            printf("Duplicate card: ignored. \n");
        }
        else{
            num_in_rank[rank]++;
            num_in_suit[suit]++;
            card_exists[rank][suit] = true;
            card_read++;
        }
    }
}

void analze_hand(int num_in_rank[], int num_in_suit[], bool* straight, bool* flush, bool* four, bool* three, int* pairs){
    
    int num_consec = 0;
    int rank, suit;

    *straight = false;
    *flush = false;
    *four = false;
    *three = false;
    *pairs;

    for (suit = 0;suit < Num_Suits; suit++){
        if (num_in_suit[suit] == Num_cards){
            *flush = true;
        }
    }
    
    rank = 0;
    while (num_in_rank[rank] == 0)    rank++;
    for (; rank < Num_Ranks && num_in_rank[rank] > 0 ; rank++){
        num_consec++;
    }
    if (num_consec == Num_cards){
        *straight = true;
        return;
    }
    
    for (rank = 0 ; rank < Num_Ranks ; rank++){
        if (num_in_rank[rank] == 4)          *four = true;
        else if (num_in_rank[rank] == 3)     *three = true;
        else if (num_in_rank[rank] == 2)     (*pairs)++;
    }

}
void print_result(bool* straight, bool* flush, bool* four, bool* three, int* pairs){  
    if (*four)                            printf("Four of a kind");       //輸出    
    else if (*three && *pairs == 1)       printf("Full house");           //輸出
    else if (*straight && *flush)         printf("Straight flush");       //輸出
    else if (*flush)                      printf("Flush");                //輸出
    else if (*straight)                   printf("Straight");             //輸出
    else if (*three)                      printf("Three of a kind");      //輸出
    else if (*pairs == 2)                 printf("Two pairs");            //輸出
    else if (*pairs == 1)                 printf("Pair");                 //輸出
    else                                  printf("High card");            //輸出

    printf("\n\n");
}

int main(void){

    bool straight, flush, four, three;
    int pairs = 0;

    int num_in_rank[Num_Ranks] = {0};
    int num_in_suit[Num_Suits] = {0};

    for (;;){
        read_card(num_in_rank, num_in_suit);
        analze_hand(num_in_rank, num_in_suit, &straight, &flush, &four, &three, &pairs);          //我有用指標喔喔喔
        print_result(&straight, &flush, &four, &three, &pairs);          //我有用指標喔喔喔
    }
    return 0;
}