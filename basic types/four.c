#include <stdio.h>
#include <ctype.h>
int main()
{
    typedef char phone;
    phone alpha;
    long int num = 0;
    printf("enter a phone number in alphabet: ");
    scanf("%c", &alpha);
    alpha = toupper(alpha);
    while (alpha != '\n')
    {
        if (alpha == ' ')
        {
            printf("space is not allowed. Try again.");
            break;
        }
        else
        {

            switch (alpha)
            {
            case 'A':
            case 'B':
            case 'C':
            {
                num = num * 10 + 2;
                break;
            }

            case 'D':
            case 'E':
            case 'F':
            {
                num = num * 10 + 3;
                break;
            }

            case 'G':
            case 'H':
            case 'I':
            {
                num = num * 10 + 4;
                break;
            }

            case 'J':
            case 'K':
            case 'L':
            {
                num = num * 10 + 5;
                break;
            }

            case 'M':
            case 'N':
            case 'O':
            {
                num = num * 10 + 6;
                break;
            }

            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            {
                num = num * 10 + 7;
                break;
            }

            case 'T':
            case 'U':
            case 'V':
            {
                num = num * 10 + 8;
                break;
            }

            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            {
                num = num * 10 + 9;
                break;
            }
            }
            printf("\n characters: %c", alpha);
            alpha = getchar();
            alpha = toupper(alpha);
        }
    }

    printf("\n phone number in numeric: %ld", num);

    return 0;
}