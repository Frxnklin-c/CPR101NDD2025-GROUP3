#define _CRT_SECURE_NO_WARNINGS     
#define FUNDAMENTALS_BUFFER_SIZE 80      // Max buffer size is 80
#define NUM_INPUT_SIZE  10      // Max size for numeric input
#include <stdio.h>      // This library works with input/output functions, such as: printf() and scanf()
#include <string.h>     // This library works with strings, such as: strlen() and strcmp()
#include <stdlib.h>     // This library converts strings to numbers(atoi)
#include "fundamentals.h"

// =====================
// Version 1 Code
// =====================

// Function to demonstrate indexing characters in a string
void fundamentals(void) {
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[FUNDAMENTALS_BUFFER_SIZE];      // stores the user's string input
    char numInput[NUM_INPUT_SIZE];      // stores the numeric input as a string
    size_t position;        // stores the character position input by the user
    do {
        // Ask user to enter string or press q to quit
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, FUNDAMENTALS_BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0';        // Remove newline character from input
        
        // Check if the user wants to quit or ask for a position number
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';      // Remove newline character
            position = atoi(numInput);      // Convert input to an integer
            // If the position is too big, set it to the last character
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }
            // Show the character at given position
            printf("The character found at %d position is '%c'\n",
                   (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);
    printf("*** End of Indexing Strings Demo ***\n\n");
    fundamentals_measure_demo();  // Call Version 2 to measure string length
}

// =====================
// Version 2 Code Starts
// =====================

// Function to demonstrate measuring the length of a string
void fundamentals_measure_demo(void) {
    char buffer2[FUNDAMENTALS_BUFFER_SIZE];  // Buffer to store string input

    printf("*** Start of Measuring Strings Demo ***\n");

    do {
        // Prompt user for input
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, FUNDAMENTALS_BUFFER_SIZE, stdin);
        buffer2[strlen(buffer2) - 1] = '\0';  // Remove newline character

        if (strcmp(buffer2, "q") != 0) {
            // Output the string and its length
            printf("The length of \"%s\" is %d characters\n",
                   buffer2, (int)strlen(buffer2));
        }

    } while (strcmp(buffer2, "q") != 0);

    printf("*** End of Measuring Strings Demo ***\n\n");
}