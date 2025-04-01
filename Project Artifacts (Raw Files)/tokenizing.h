
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE];
    //set size of the array to the string size of string entered by user
    char* nextWord = NULL;
    // set the value of nextWord to null by using itas memory address
    int wordsCounter;
    //a variable to count number of words
    do {
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        //read 
        words[strlen(words) - 1] = '\0';
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            while (nextWord) {
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);
    printf("*** End of Tokenizing Words Demo ***\n");
}
