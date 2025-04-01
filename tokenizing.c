#include "tokenizing.h"  // Include the header for declarations and constants

// Function that demonstrates how to tokenize a string into individual words
void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n");

    // Buffer to hold the user input string
    char words[TOKENIZING_BUFFER_SIZE];

    // Pointer to hold each word found by strtok
    char* nextWord = NULL;

    do {
        // Prompt the user for input
        printf("Type a few words separated by space (q - to quit):\n");

        // Read input from the user
        fgets(words, TOKENIZING_BUFFER_SIZE, stdin);

        // Remove the trailing newline character from the input
        words[strlen(words) - 1] = '\0';

        // Check if user wants to quit
        if (strcmp(words, "q") != 0) {
            // Tokenize the string based on spaces
            nextWord = strtok(words, " ");

            // Loop through each token (word)
            while (nextWord) {
                printf("Next word is '%s'\n", nextWord);  // Print the token
                nextWord = strtok(NULL, " ");  // Continue tokenizing
            }
        }
    } while (strcmp(words, "q") != 0);  // Repeat until user enters 'q'

    printf("*** End of Tokenizing Words Demo ***\n\n");
}
