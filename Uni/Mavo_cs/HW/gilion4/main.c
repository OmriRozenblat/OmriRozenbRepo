//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//#define ABC_SIZE 'z' - 'a' + 1
//#define WORD_MAX_LEN 12
//#define SONG_MAX_SIZE 50
//
///* Function Declarations */
//void printSong(char *songLyrics[], int songSize);
//int readSongLyrics(char *songLyrics[], int songMaxSize, int wordMaxLen);
//void releaseMemory(char *songLyrics[], int songSize);
//int* findSwiftyWordIndexes(char *songLyrics[], int songSize, int k);
//void encryptSwiftyWord(char *songLyrics[], int wordIdxs[], int k, \
//unsigned char taylorCipherKey[ABC_SIZE]);
//
//// DO NOT TOUCH
//void printSong(char *songLyrics[], int songSize) {
//    for (int i = 0; i < songSize; i++) {
//        if (songLyrics[i] != NULL) {
//            printf("%s ", songLyrics[i]);
//        }
//    }
//    printf("\n");
//}
//
////// DO NOT TOUCH
//int main()
//{
//    unsigned char taylorCipherKey[ABC_SIZE] = {
//        '@', '4', '(', '8', '3', '/', '6', 'H', '!', '}', '&', '1', '+',
//        '^', '0', '5', '9', 'R', '$', '#', '<', '>', 'w', '*', '~', 'z'
//    };
//
//    char *songLyrics[SONG_MAX_SIZE] = { NULL };
//
//    // Get k input
//    int k;
//    printf("Enter k:\n");
//    scanf("%d", &k);
//
//    // Get song lyrics input
//    printf("Enter your song lyrics:\n");
//    int songSize = readSongLyrics(songLyrics, SONG_MAX_SIZE, WORD_MAX_LEN);
//
//    // Find the word that appears k times in the song,
//    // and encrypt it using the key
//    int *wordIdxs = findSwiftyWordIndexes(songLyrics, songSize, k);
//    encryptSwiftyWord(songLyrics, wordIdxs, k, taylorCipherKey);
//
//    // Print the result
//    printSong(songLyrics, songSize);
//
//    // Release all dynamically allocated memory
//    free(wordIdxs);
//    releaseMemory(songLyrics, songSize);
//
//    return 0;
//}
//
//
///* Your Implementation: */
//
//
////#TODO
//
//int* findSwiftyWordIndexes(char *songLyrics[], int songSize, int k){
//
//    int word_counter = 0;
//    for(int i=0; i< songSize; i++){
//        //initialize an array of indexes the size of k
//        int* wordidxs = (int*)malloc(k * sizeof(int));
//        for (int j=0;j < songSize; j++){
//            if(strcmp(songLyrics[i], songLyrics[j]) == 0){
//                //add the index to the array at the next position
//                wordidxs[word_counter] = j;
//                word_counter++;
//            }
//        }
//        if(word_counter == k){
//            //if exactly - return it
//            return wordidxs;
//        }
//        //free if not exactly
//        free(wordidxs);
//    }
//    //wont happen, guaranteed to have a result
//    return NULL;
//}
//
//void encryptSwiftyWord(char *songLyrics[], int wordIdxs[], int k, \
//unsigned char taylorCipherKey[ABC_SIZE]){
//
//    for(int word_index = 0; word_index < k; word_index++){
//        int letter_counter = 0;
//        int index_of_word_in_song = wordIdxs[word_index];
//
//        while (songLyrics[index_of_word_in_song][letter_counter] != '\0'){
//            unsigned char ABC_letter_index = songLyrics[index_of_word_in_song][letter_counter] - 'a';
//            songLyrics[index_of_word_in_song][letter_counter] = taylorCipherKey[ABC_letter_index];
//            letter_counter++;
//
//    }
//
//}
//}
//
//
//void releaseMemory(char *songLyrics[], int songSize){
//    for(int i=0 ;i < songSize; i++){
//        free(songLyrics[i]);
//    }
//}
//
//
//int readSongLyrics(char *songLyrics[], int songMaxSize, int wordMaxLen){
//    int word_counter = 0;
//    char word_in_lyr[wordMaxLen];
//    while(scanf("%s", word_in_lyr) != EOF && word_counter < songMaxSize){
//        printf("word input: %s", word_in_lyr);
//        char* word = (char*) malloc(sizeof(char)* strlen(word_in_lyr) + 1);
//        strcpy(word_in_lyr, word);
//        songLyrics[word_counter] = word;
//        word_counter++;
//
//    }
//
//    return word_counter;
//
//
//}
////
////while((ch = getchar()) != '\n' && ch != EOF ) {
////
////if (i < SONG_MAX_SIZE) {
////if(ch == ' '){
////word_num++;
////}
////str[i++] = ch;
////}
////
////}
////str[i] = '\0';