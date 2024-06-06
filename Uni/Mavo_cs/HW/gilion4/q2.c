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
//int readSongLyrics(char *songLyrics[], int songMaxSize, int wordMaxLen){
//    int word_counter = 0;
//
////    malloc a char array to store user input
//    char* word_in_lyr =
//            (char*) malloc( wordMaxLen * sizeof(char) + 1);
//
//    while((scanf(" %s", word_in_lyr) != EOF)
//    && (word_counter < songMaxSize)){
////        malloc an array the size of the user input
//        char* word =
//                (char*) malloc( (int)strlen(word_in_lyr) * sizeof(char) + 1);
////        copy user input to the array
//        strcpy(word, word_in_lyr);
//        songLyrics[word_counter] = word;
//        word_counter++;
//
//    }
//    free(word_in_lyr);
//    return word_counter;
//}
//
//
//
//int* findSwiftyWordIndexes(char *songLyrics[], int songSize, int k){
//
//    int word_counter = 0;
//    for(int i = 0; i < songSize; i++){
//        //initialize an array of indexes the size of k
//        int* wordidxs = (int*)malloc(k * sizeof(int) + 1);
//        for (int j=0;j < songSize; j++){
//            if(strcmp(songLyrics[i], songLyrics[j]) == 0){
//                //add the index to the array at the next position
//                wordidxs[word_counter] = j;
//                word_counter++;
//                if(word_counter > k){
//                    break;
//                }
//            }
//        }
//        if(word_counter == k){
//            //if exactly - return it
//            return wordidxs;
//        }
//        //free if not exactly
//        word_counter = 0;
//        free(wordidxs);
//    }
//    //wont happen, guaranteed to have a result
//    return NULL;
//}
//
//void encryptSwiftyWord(char *songLyrics[], int wordIdxs[], int k, \
//    unsigned char taylorCipherKey[ABC_SIZE]){
//
////    iterate through the strings in the word index array
//    for(int word_index = 0; word_index < k; word_index++){
//        int letter_counter = 0;
//        int index_of_word_in_song = wordIdxs[word_index];
//
////        iterate through each word
//        while (songLyrics[index_of_word_in_song][letter_counter] != '\0'){
//            // the letter index in the ABC
//            int ABC_letter_index =
//                    songLyrics[index_of_word_in_song][letter_counter] - 'a';
////            switch each letter to the encrypted letter
//            songLyrics[index_of_word_in_song][letter_counter] =
//                    taylorCipherKey[ABC_letter_index];
//            letter_counter++;
//
//    }
//
//}
//}
//
//
//void releaseMemory(char *songLyrics[], int songSize){
//    for(int i = 0 ;i < songSize; i++){
//        free(songLyrics[i]);
//    }
//}
//
