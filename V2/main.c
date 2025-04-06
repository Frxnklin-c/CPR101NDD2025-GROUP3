// Disable compiler warnings for functions like 'fgets' on some compilers (mostly for Windows/MSVC)
#define _CRT_SECURE_NO_WARNINGS

// Include headers for all the modules (A–D)
#include "fundamentals.h"   // Module A - indexing, measuring, copying
#include "manipulating.h"   // Module B - concatenation, comparison, search
#include "converting.h"     // Module D - string to int/double/long conversion (your module)
#include "tokenizing.h"     // Module C - tokenizing words, phrases, and sentences

// Entry point of the program
int main(void)
{
    char buff[10];  // Buffer for user menu selection input

    // Loop to repeatedly prompt user to choose a module or exit
    do {
        // Display menu options for all modules
        printf("1 – Fundamentals\n");
        printf("2 – Manipulation\n");
        printf("3 – Converting\n");
        printf("4 – Tokenizing\n");
        printf("0 – Exit\n");

        // Prompt for user input
        printf("Which module to run? \n");
        fgets(buff, 10, stdin);  // Read user input into buffer

        // Decide which module to run based on user input
        switch (buff[0]) {
            case '1': fundamentals(); break;   // Run Fundamentals module
            case '2': manipulating(); break;   // Run Manipulation module
            case '3': converting(); break;     // Run Converting module
            case '4': tokenizing(); break;     // Run Tokenizing module
        }
    } while (buff[0] != '0');  // Continue until user enters '0' to exit

    return 0;  // End of program
}
