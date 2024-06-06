#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define ABC_LEN 26

int es_q2(char* s1, char* s2);
char* readStr();
int str_len(char* str);
bool check_arr_empty(int* arr, int len);

int main() {
//    char *s1 = readStr();
//    if (!s1) {
//        return 1;
//    }
//    char *s2 = readStr();
//    if (!s2) {
//        free(s1);
//        return 1;
//    }
    char* s1 = "mba";
    char* s2 = "mbabammba";
    printf("%d", es_q2(s1, s2));
//    free(s1);
//    free(s2);
    return 0;
}

int str_len(char* str){
    int i=0;
    int str_len = 0;
    while(str[i] != '\0'){
        str_len++;
        i++;
    }
    return str_len;
}


bool check_arr_empty(int* arr, int len){
    for(int i = 0; i<len;i++){
        if(arr[i] != 0){
            return false;
        }
    }
    return true;
}
char* readStr() {
    int n;
    if (scanf("%d", &n) != 1) {
        return NULL;
    }
    char* s = malloc(n + 1);
    if (!s) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%c", s+i) != 1) {
            free(s);
            return NULL;
        }
        if (s[i] == '\n') {
            i--;
        }
    }
    s[n] = '\0';
    return s;
}



int es_q2(char* s1, char* s2) {
    int hist[ABC_LEN] = {0};
    int sim_counter = 0;
    int s1_len = str_len(s1);
    for(int i=0;i < s1_len;i++){
        int char_index = s1[i] - 'a';
        hist[char_index]++;
    }
    int j = 0;
    int start_index = 0;

    while(s2[j]!= '\0'){
        int char_index = s2[j] - 'a';
        hist[char_index]--;
        if(j>=s1_len-1){
            if(check_arr_empty(hist, ABC_LEN)){
                sim_counter++;
            }
            int start_index_letter = s2[start_index] - 'a';
            hist[start_index_letter] ++;
            start_index++;
        }
        j++;

    }

    return sim_counter;
}
