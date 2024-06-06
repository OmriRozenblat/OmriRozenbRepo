#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ABC_len 26

int permute(char* s1, char* s2);

int main() {
    permute("hello", "ollhe");

    return 0;
}

int permute(char* s1, char* s2) {
    char *hist[ABC_len] = {0};
    int i = 0;
    while (s1[i] != '\0'){
        int letter_pos = s1[i] - 'a';
        hist[letter_pos] += 1;
        i++;
    }
    i = 0;
    while (s2[i] != '\0'){
        int letter_pos = s2[i] - 'a';
        hist[letter_pos] -= 1;
        i++;
    }
    for (int j =0;j<ABC_len;j++){
        if (hist[j] != 0){
            printf("false!");
            return false;
        }

    }
    printf("true!");
    return true;
}