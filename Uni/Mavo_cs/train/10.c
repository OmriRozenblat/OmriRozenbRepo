#include <stdio.h>
#include <stdbool.h>
#define ABC_LEN 26
#define letter_range 127


int count_mixed_str(char *s1, char* s2);
bool cmp_hist(int hist1[], int hist2[]);





int main(){
    char* s1 = "hi";
    char* s2 = "nightihtihi";
    int res = count_mixed_str(s1,s2);
    return res;

}


bool cmp_hist(int hist1[], int hist2[]){
    for(int i = 0; i < ABC_LEN; i++){
        if(hist2[i] != hist1[i]){
            return false;
        }
    }
    return true;
}

int count_mixed_str(char *s1, char* s2){
    int hist_full_word[ABC_LEN] = {0};
    int hist_sub_word[ABC_LEN] = {0};
    int counter = 0;
    int i = 0;
    while (s1[i] != '\0'){
        hist_sub_word[s1[i] - 'a']++;
        i++;
    }
    int sub_word_len = i;
    int j = 0;
    int first_index = 0;
    while (s2[j] != '\0'){
        hist_full_word[s2[j] - 'a']++;
        if( j >= sub_word_len - 1){
            if(cmp_hist(hist_full_word, hist_sub_word)){
                counter++;
            }
            hist_full_word[s2[first_index] - 'a']--;
            first_index++;
            }
        j++;

    }
    return counter;



}