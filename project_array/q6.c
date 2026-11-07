// The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
// messages. Here’s a typical B1FF communiqué:
// H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
// Write a “B1FF filter” that reads a message entered by the user and translates it into B1FFspeak:
// Enter message: Hey dude, C is rilly cool
// In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
// Your program should convert the message to upper-case letters, substitute digits for certain
// letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks.
// Hint: Store the original message in an array of characters, then go back through the array,
// translating and printing characters one by one.

#include <stdio.h>
#include<ctype.h>
#define space 100
int main()
{
    char box;
    char hol[space] = {0};
    int i = 0;
    printf("\t\t WELCOME TO B1FF TYPE WRITER............... \n\n");
    printf("Enter message: ");

    while ((box = getchar()) != '\n')
    {
        hol[i] = toupper(box);
        
        i++;
    }

    for(int i = 0;i<space; i++)
    {
        if(hol[i]==0)
        { 
            break; 
        }
        else if (hol[i]!=0)
        {
            switch(hol[i])
            {
                case 'A': hol[i] = '@'; break;
                case 'B': hol[i] = '8'; break;
                case 'C': hol[i] = '('; break;
                case 'D': hol[i] = ')'; break;
                case 'E': hol[i] = '3'; break;
                case 'F': hol[i] = '='; break;
                case 'G': hol[i] = '6'; break;
                case 'H': hol[i] = '#'; break;
                case 'I': hol[i] = '!'; break;
                case 'J': hol[i] = ']'; break;
                case 'K': hol[i] = '<'; break;
                case 'L': hol[i] = '1'; break;
                case 'M': hol[i] = 'M'; break;
                case 'N': hol[i] = '^'; break;
                case 'O': hol[i] = '0'; break;
                case 'P': hol[i] = '9'; break;
                case 'Q': hol[i] = 'Q'; break;
                case 'R': hol[i] = '2'; break;
                case 'S': hol[i] = '$'; break;
                case 'T': hol[i] = '7'; break;
                case 'U': hol[i] = 'V'; break;
                case 'V': hol[i] = 'V'; break;
                case 'W': hol[i] = 'W'; break;
                case 'X': hol[i] = 'X'; break;
                case 'Y': hol[i] = 'Y'; break;
                case 'Z': hol[i] = '2'; break;
            }
        }

      
    }

    printf("In casual: ");
    for(int i = 0;i<space;i++)
    {
        printf("%c", hol[i]);
    }
    return 0;
}