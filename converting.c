// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS  // Allows the use of older functions like 'fgets' without compiler warnings
#define BUFFER_SIZE 80           // Defines a constant for the max buffer size for input

#include "converting.h"          // Includes the header file for this module

// Function that demonstrates converting a string to an integer
void converting(void) {
    printf("*** Start of Converting Strings to int Demo ***\n");

    char intString[BUFFER_SIZE];  // Declares a character array to hold the user input
    int intNumber;                // Variable to store the converted integer

    do {
        // Prompt the user for an integer string input
        printf("Type an int numeric string (q - to quit):\n");

        // Read a line of input from the user
        fgets(intString, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of input
        intString[strlen(intString) - 1] = '\0';

        // Check if the input is not 'q' (the quit command)
        if (strcmp(intString, "q") != 0) {
            // Convert the string to an integer using atoi
            intNumber = atoi(intString);

            // Display the result of the conversion
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);  // Loop continues until user enters 'q'

    // Display end message
    printf("*** End of Converting Strings to int Demo ***\n\n");
}
