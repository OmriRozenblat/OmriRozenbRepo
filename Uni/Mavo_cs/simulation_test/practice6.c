#include "stdbool.h"
#include "stdio.h"
#include <stdio.h>
#define ABC_len 26

int CountPermutations(char* s1, char* s2);

int main(){
    char* s1 = "abbabb";
    char* s2 = "ab";
}


int CountPermutations(char* s1, char* s2){
    int hist[ABC_len] = {0};
    int temp_hist[ABC_len] = {0};
    int premutation_counter = 0;
    int i=0;
    int s2_len = 0;
    while (s2[i] != '\0'){
        int letter_index = s2[i] - 'a';
        hist[letter_index] += 1;
        temp_hist[letter_index] += 1;
        s2_len++;
        i++;
    }

    int j=0;
    int s2_len_counter = 0;

    char iteration_char = s1[0];
    while(s1[j] != '\0'){
        if(s2_len_counter>s2_len){
            s2_len_counter = 0;

        }

        int letter_index = s1[j] - 'a';
        hist[letter_index] -= 1;





    }
    for(int j=0;j<s2_len;j++){
        int letter_index = s1[j] - 'a';
        hist[letter_index] -= 1;

    }
    for(int s=0;s<ABC_len;s++){
        if(hist[s] == 0){
            continue;
        }
        hist
    }




}