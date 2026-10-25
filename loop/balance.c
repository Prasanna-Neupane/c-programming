// let’s develop a program that maintains a checkbook balance. The program will offer the user a menu of choices: clear the account
// balance, credit money to the account, debit money from the account, display the
// current balance, and exit the program. The choices are represented by the integers
// 0, 1, 2, 3, and 4, respectively.

#include <stdio.h>

int main()
{
    float clear, credit, debit, balance = 0.0f, exit;
    int command;

    while (1)
    {
        printf(" \nEnter command: ");
        scanf("%d", &command);
                                               
        switch (command)
        {
        case 0:
        {
            balance = 0.0f;
            printf("Your balance hase been cleared. \n Your current balance: %d", balance);
            break;
        }

        case 1:
        {
            printf("Enter amount of credit: ");
            scanf("%f", &credit);
            balance = balance + credit;
            break;
        }

        case 2:
        {
            printf("Enter amount of debit: ");
            scanf("%f", &debit);

            if (balance > debit)
            {
                balance = balance - debit;
            }
            else if (balance < debit)
            {
                printf("sorry you can't take the debit. You current balance is low.");
            }
            break;
        }

        case 3:
        {
            printf("Current balance: %.2f", balance);
            break;
        }

        case 4:
        {
            printf("Program is closed. Try next time");
            return 0;
        }

        default:
        {
            printf("Please enter a valid input. \n Guide: \n clear bank amount = 0\t credit entry = 1\t debit entry = 2\t check balance = 3 \t exit = 4");
        }
        
        }
    }
    return 0;
}
