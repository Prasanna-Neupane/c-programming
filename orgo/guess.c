#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
void new_guess_number();
void enter_num();
void check_guess();
int secret_num, num, guess, played;

int main()
{
    char ch = 'Y';
    while (ch == 'Y')
    {
        guess = 0;
        printf("Guess the secret number between 1 and 100. ");

        new_guess_number();
        enter_num();
        check_guess();
        printf("\n number of guesses: %u", guess);

        printf(" \n Wanna play again?(y/n): ");
        played++;
        getchar();
        scanf("%c", &ch);
        ch = toupper(ch);
        printf("\n Number of games played: %d", played);
        
    }

    return 0;
}

void new_guess_number()
{
    srand((unsigned)time(NULL));
    secret_num = rand() % 100 + 1;
    printf(" \n the random number has been generated.");
}

void enter_num()
{
    printf("\nEnter guess: ");
    scanf("%d", &num);
    guess++;
}

void check_guess()
{
    while (1)
    {
        if (secret_num == num)
        {
            printf("You sucessfully guessed the number.");
            return;
        }
        else if (num < secret_num)
        {
            printf("low try again");
            enter_num();
        }
        else if (num > secret_num)
        {
            printf("high try again.");
            enter_num();
        }
    }
}