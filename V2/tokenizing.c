#include "tokenizing.h"  // Include the header for declarations and constants

// =====================
// Version 1 Code
// =====================

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
    tokenize_phrases_demo();  // Call Version 2 function to tokenize phrases
}

// =====================
// Version 2 Code Starts
// =====================

// Function to tokenize comma-separated phrases
void tokenize_phrases_demo(void) {
    char phrases[TOKENIZING_BUFFER_SIZE];   // Input buffer for user entry
    char* nextPhrase = NULL;                // Pointer for each token
    int phrasesCounter;                     // Counter for phrase numbering

    printf("*** Start of Tokenizing Phrases Demo ***\n");

    do {
        // Ask the user for input
        printf("Type a few phrases separated by comma (q - to quit):\n");
        fgets(phrases, TOKENIZING_BUFFER_SIZE, stdin);
        phrases[strlen(phrases) - 1] = '\0';  // Remove newline character

        // Only proceed if input is not "q"
        if (strcmp(phrases, "q") != 0) {
            nextPhrase = strtok(phrases, ",");  // Tokenize based on comma
            phrasesCounter = 1;

            // Loop through each token
            while (nextPhrase) {
                printf("Phrase %d is '%s'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");  // Get next token
            }
        }
    } while (strcmp(phrases, "q") != 0);  // Loop until user enters 'q'

    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}