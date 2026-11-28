#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ranks 13
#define suits 4
#define card_in_hand 5

void num_entry();
void flushh();
void straightt();


char entered_ranked_card;
char entered_suited_card;
bool duplicate_card[ranks][suits] = {false}; // to check the duplicate value
int rank, suit;//ranking and suit assigned after the value of card is entered.
int card_count_in_hand = 0;
int repeat_card[ranks][suits] = {0}; //card repeatation count
int repeat_rank_card[ranks] = {0}; 
int repeat_suit_card[suits] = {0}; 
int entered_rank_store[card_in_hand];
int sorted_rank[card_in_hand];
bool flush = false;
bool straight = false;

int main() {
    num_entry();
    flushh();
    return 0;
}

void num_entry()
{
    while (card_count_in_hand<card_in_hand)
    {
         //rank and suit assigned.....................................
        printf("Enter a card:");//
        scanf("%d", entered_rank_store);                             
        entered_ranked_card = getchar();
        entered_rank_store[card_count_in_hand] = entered_ranked_card - '0';                                
            switch (entered_ranked_card)
            {
                case '2': rank = 0; break;
                case '3': rank = 1; break;
                case '4': rank = 2; break;
                case '5': rank = 3; break;
                case '6': rank = 4; break;
                case '7': rank = 5; break;
                case '8': rank = 6; break;
                case '9': rank = 7; break;
                case 't': case 'T': rank = 8; break;
                case 'j': case 'J': rank = 9; break;
                case 'q': case 'Q': rank = 10; break;
                case 'k': case 'K': rank = 11; break;
                case 'a': case 'A': rank = 12; break; 
            }
        entered_suited_card = getchar();
        entered_suited_card = tolower(entered_suited_card);
            switch (entered_suited_card)
            {
                case 'c': suit = 0; break;
                case 'd': suit = 1; break;
                case 's': suit = 2; break;
                case 'h': suit = 3; break;
                default: printf("enter valid suit card."); continue;
            }
        //...........................................................
            getchar();

        //duplicate count............................................
        if (duplicate_card[rank][suit]==true)//                     .
        {//                                                         .
            printf("Duplicate value. Enter card again.\n");//       .
        }//                                                         .
        else//                                                      .
        {//                                                         .
            duplicate_card[rank][suit] = true;//                    .
            repeat_card[rank][suit]++;// 
            repeat_rank_card[rank]++;
            repeat_suit_card[suit]++;                           
            card_count_in_hand++;//                                 .
        }//..........................................................
    }
}

bool flush = false;

void flushh()
{
    for (int i = 0; i < suits; i++)
    {
        if (repeat_suit_card[i] == 5)
            {
                flush = true;
            }
    }
}

void striaghtt()
{
    //fuction project q1.c
    
}
    
