// TOKENIZING MODULE HEADER
#ifndef _TOKENIZING_H  // Prevents multiple inclusions of this file
#define _TOKENIZING_H

#include <stdio.h>      // Required for printf and fgets
#include <string.h>     // Required for strlen, strcmp, strtok
#include <stdlib.h>     // Required for NULL

#define TOKENIZING_BUFFER_SIZE 300  // Constant buffer size for tokenizing input

// Function declaration for tokenizing module (implementation is in tokenizing.c)
void tokenizing(void);  // Declared here

#endif  // End of header guard
