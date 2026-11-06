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
#define space 100
int main() {
    char box;
    
    printf("\t\t WELCOME TO B1FF TYPE WRITER............... \n\n");
    printf("Enter message: ");
    
    while((box = getchar()) != '\n')
    {
    
        printf("The characters: %c \n", box);
    }
    return 0;
}