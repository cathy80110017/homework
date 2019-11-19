/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.11.18                                              */
/* Purpose: chap10.03                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/
//一時抄程式碼一時爽，一直抄程式碼一直爽

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define Num_Ranks 13
#define Num_Suits 4
#define Num_cards 5

int hand[Num_cards][2];
bool straight, flush, four, three;
int pairs;

bool duplicate(int rank, int suit, int hand[Num_cards][2], int cards_read){ //判斷有沒有重複的卡
    int i;
    for (i = 0; i < cards_read; i++){
        if (hand[cards_read][0] == rank && hand[cards_read][1] == suit)
            return true;
    }
    return false;
}

void read_card(void){

    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int card_read = 0;
    
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
            default:                    bad_card = true;   //不是合法的花色
        }

        while ((ch = getchar()) != '\n'){
            if (ch != ' ')      
                bad_card = true;
        }
        
        if (bad_card){
            printf("Bad card: ignored. \n");
        }
        else if (duplicate (rank, suit, hand, card_read)){
            printf("Duplicate card: ignored. \n");
        }
        else{
            hand[card_read][0] = rank;
            hand[card_read][1] = suit; 
            card_read++;
        }
    }
}

void analyze_hand(void){
    
    int num_consec = 0;
    int card, suit, matches;

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    int i, j, smallest, temp_suit, temp_rank;
    for (i = 0; i < Num_cards; i++){
        smallest = i;

        for (j = i + 1;j < Num_cards;j++){
            if (hand[j][0] < hand[smallest][0])
                smallest = j;     
        }
        
        temp_rank           = hand[i][0];
        temp_suit           = hand[i][1];
        hand[i][0]          = hand[smallest][0];
        hand[i][1]          = hand[smallest][1];
        hand[smallest][0]   = temp_rank;
        hand[smallest][1]   = temp_suit;
    }
    
    for (card = 1; card < Num_cards; card++){
        if (hand[card][1] != hand[0][1])
            break;
        if (card == Num_cards - 1)
            flush = true;
    }
    
    for (card = 1; card < Num_cards ; card++){
        if (hand[card][0] - hand[card-1][0] != 1)
            break;
        if (card == Num_cards - 1)
            straight = true;
    }
    
    for (i = 0; i < Num_cards; i++){
        matches = 0;
        for (j = i + 1; j < Num_cards; j++){
            if (hand[j][0] == hand[i][0])
                matches++;
        }
        
        if (matches == 1) pairs++;      //兩張數字一樣
        if (matches == 2) three = true; //三張數字一樣
        if (matches == 3) four = true;  //四張數字一樣
        
    }
    
}

void print_result(void){
    if (straight && flush)              printf("Straight flush");       //輸出
    else if (four)                      printf("Four of a kin");        //輸出
    else if (three && pairs == 1)       printf("Full house");           //輸出
    else if (flush)                     printf("Flush");                //輸出
    else if (straight)                  printf("Straight");             //輸出
    else if (three)                     printf("Three of a kind");      //輸出
    else if (pairs == 2)                printf("Two pairs");            //輸出
    else if (pairs == 1)                printf("Pair");                 //輸出
    else                                printf("High card");            //輸出

    printf("\n\n");
}

int main(void){
    for (;;){
        read_card();
        analyze_hand();
        print_result();
    }
}