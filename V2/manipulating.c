#include "manipulating.h"  // Include the header for this module

// =====================
// Version 1 Code
// =====================

// Function that demonstrates string concatenation
void manipulating(void) {
    printf("*** Start of Concatenating Strings Demo ***\n");

    // Declare two character arrays for input strings
    char string1[MANIPULATING_BUFFER_SIZE];
    char string2[MANIPULATING_BUFFER_SIZE];

    do {
        // Prompt the user to enter the first string
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, MANIPULATING_BUFFER_SIZE, stdin);
        string1[strlen(string1) - 1] = '\0';  // Remove newline character

        // Check if user did not choose to quit
        if (strcmp(string1, "q") != 0) {
            // Prompt the user to enter the second string
            printf("Type the 2nd string:\n");
            fgets(string2, MANIPULATING_BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0';  // Remove newline character

            // Concatenate second string to first string
            strcat(string1, string2);

            // Display the concatenated result
            printf("Concatenated string is '%s'\n", string1);
        }

    } while (strcmp(string1, "q") != 0);  // Loop continues until user enters 'q'

    printf("*** End of Concatenating Strings Demo ***\n\n");
    compare_strings_demo();  // Call the Version 2 comparison function
}

// =====================
// Version 2 Code Starts
// =====================

// Function to demonstrate comparing strings
void compare_strings_demo(void) {
    // Declare two character arrays for comparison
    char compare1[MANIPULATING_BUFFER_SIZE];
    char compare2[MANIPULATING_BUFFER_SIZE];
    int result;

    // Begin demo message
    printf("*** Start of Comparing Strings Demo ***\n");

    // Loop until the user enters 'q' to quit
    do {
        // Prompt user for first string
        printf("Type the 1st string to compare (q - to quit):\n");
        fgets(compare1, MANIPULATING_BUFFER_SIZE, stdin);
        compare1[strlen(compare1) - 1] = '\0';  // Remove newline character

        // If not quitting, continue with comparison
        if (strcmp(compare1, "q") != 0) {
            // Prompt user for second string
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, MANIPULATING_BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0';  // Remove newline character

            // Compare the two strings using strcmp
            result = strcmp(compare1, compare2);

            // Display comparison result
            if (result < 0)
                printf("\"%s\" is less than \"%s\"\n", compare1, compare2);
            else if (result == 0)
                printf("\"%s\" is equal to \"%s\"\n", compare1, compare2);
            else
                printf("\"%s\" is greater than \"%s\"\n", compare1, compare2);
        }
    } while (strcmp(compare1, "q") != 0);  // Repeat until 'q' is entered

    // End demo message
    printf("*** End of Comparing Strings Demo ***\n\n");
}