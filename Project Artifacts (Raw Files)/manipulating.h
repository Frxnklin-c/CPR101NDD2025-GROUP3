// MANTPULATING MODULE HEADER
// FIX: Corrected header guard syntax and name
#ifndef _MANIPULATING_H  // Was "Hifndef MANIPULATING H" (typo + invalid name)
#define _MANIPULATING_H  // Added underscore and fixed name


#include <stdio.h>
#include <string.h> 
void manipulating(void);  // Removed space before semicolon

#endif

// removed :(CRT_SECURE_NO_WARNINGS)
#define BUFFER_SIZE 80

void manipulating(void) {
    printf("*** Start of Concatenating Strings Demo ***\n");
    // FIX: Corrected array declaration syntax and variable name
    char string1[BUFFER_SIZE]; // defines buffer size 
    char string2[BUFFER_SIZE];

    do {
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);
        // FIX: Corrected variable name (string1) and removed 'l' typo
        string1[strlen(string1) - 1] = '\0'; // Was "string[strlen(stringl)"

        // FIX: Corrected comparison operator and added braces
        if (strcmp(string1, "q") != 0) {  // Was "|= 0)) 1" (invalid operator + missing '{')
            printf("Type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0';

            // FIX: Corrected variable name (string1)
            strcat(string1, string2);  // Was "stringl"
            
            // FIX: Corrected format specifier to %s
            printf("Concatenated string is '%s'\n", string1); // Was "\'gs\'"
        }
    // FIX: Corrected loop condition to check for "q" instead of "9"
    } while (strcmp(string1, "q") != 0);  // Was "9" in condition

    // FIX: Added missing printf message
    printf("*** End of Concatenating Strings Demo ***\n\n");
}
// VOIIDDD
