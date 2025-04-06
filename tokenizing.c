#include "tokenizing.h"  // Include the header for declarations and constants

// Function that demonstrates how to tokenize a string, seperated by comma into individual words
void tokenizing(void) {
	//prompting user to enter a string of character
   printf("*** Start of Tokenizing Phrases Demo ***\n");

    char phrases[BUFFER_SIZE];
    //defining an array with size of the entered string
    char* nextPhrase = NULL;
    int phrasesCounter;

    do {
        printf("Type a few phrases separated by comma (q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);
        //reading user input from stdin
        phrases[strlen(phrases) - 1] = '\0';
       // setting the last character to be null terminator to remove new line charactteer
        if ((strcmp(phrases, "q") != 0)) {
        	//continue only if user Input is not "q"
            nextPhrase = strtok(phrases, ",");
            //spliting the string into phrases/tokens whenever there is ","
            phrasesCounter = 1;
            // counts the number of phrases/tokens

// while nextPhrase is not Equal to "null", prints the nextPhrase counter and value  
            while (nextPhrase) {
    
                printf("Phrase #%d is '%s'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");
                //sets the value of next phrase to null to move to next token
            }
        }
    } while (strcmp(phrases, "q") != 0); // repeat until user input is not "q"

    printf("*** End of Tokenizing Phrases Demo ***\n");
    
}
