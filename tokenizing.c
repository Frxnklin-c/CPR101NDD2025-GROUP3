#include "tokenizing.h"  // Include the header for declarations and constants

// Function that demonstrates how to tokenize a string, seperated by comma into individual words
void tokenizing(void) {

   // V3
printf("*** Start of Tokenizing Sentences Demo ***\n");
char sentences[BUFFER_SIZE];
//declare a character array and set array size to the input length by user
char* nextSentence = NULL;
//set nextSentence to null
int sentencesCounter;
//defining an integer to count the number of words
do {
    printf("Type a few sentences separated by dot(q - to quit):\n");
    //prompt user to enter an input
    fgets(sentences, BUFFER_SIZE, stdin);
    //read the user input up to BUFFER_SIZE from stdin and save it to sentences
    sentences[strlen(sentences) - 1] = '\0';
    //set the last character to null terminator to remove newline character
    if ((strcmp(sentences, "q") != 0)) {
    	//continue if user input is not equal to "q"
        nextSentence = strtok(sentences, ".");
        //seprate the string into different tokens whenevr using "." as the delimiter
        sentencesCounter = 1;
        //add to the number of tokens
        while (nextSentence) {
            printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence);
            //while the nextSentence is not equal to "null"(there are more tokens), print the token number and token
            nextSentence = strtok(NULL, ".");
            //continue deviding the string into tokens
        }
    }
} while (strcmp(sentences, "q") != 0);
//exits the function if user input is "q"
printf("*** End of Tokenizing Sentences Demo ***\n\n");
 
}

