// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS  // Allows the use of older functions like 'fgets' without compiler warnings
#define BUFFER_SIZE 80           // Defines a constant for the max buffer size for input

#include "converting.h"          // Includes the header file for this module

// =====================
// Version 1 Code
// =====================

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
    converting_doubles_demo();  // Call Version 2 function to convert strings to doubles
}

// =====================
// Version 2 Code Starts
// =====================

// Function to convert string to double using atof()
void converting_doubles_demo(void) {
    char doubleString[BUFFER_SIZE];  // Buffer to store input
    double doubleNumber;             // Variable to store converted double

    printf("*** Start of Converting Strings to double Demo ***\n");

    do {
        // Prompt user for a float/double string
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);                  // Get input
        doubleString[strlen(doubleString) - 1] = '\0';            // Remove newline

        if (strcmp(doubleString, "q") != 0) {
            doubleNumber = atof(doubleString);                    // Convert to double
            printf("Converted number is %f\n", doubleNumber);     // Print result
        }

    } while (strcmp(doubleString, "q") != 0);  // Loop until user quits

    printf("*** End of Converting Strings to double Demo ***\n\n");
}