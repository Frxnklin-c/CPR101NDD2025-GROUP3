
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE];
    //array to store what user enteres
    char* nextWord = NULL;
    // set the value of nextWord to null
    int wordsCounter;
    //a variable to count number of words
    do {
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        //read a line of input from stdin, up to the size of BUFFER_SIZE, into  "words" array
        words[strlen(words) - 1] = '\0';
        // set the last character to null terminator
        if (strcmp(words, "q") != 0) {
        	//checks if user input is q to terminate the program
            nextWord = strtok(words, " ");
            //break the sttring into seperate words whenever it encounters a space character
            //basically the first word or token is returned by this function and stored in nextWord
            wordsCounter = 1;
            //counts the number of words
            while (nextWord) {
            	
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
                //to continue to return other words of the string until no words (tokens) are left
                
            }
            
        }
 
   } while (strcmp(words, "q") != 0);
   
   //run the program and wait for user input  until user input is "q"
      printf("*** End of Tokenizing Words Demo ***\n");
}
