#include "manipulating.h"  // Include the header for this module

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
}
