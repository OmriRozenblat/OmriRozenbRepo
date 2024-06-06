#include <stdio.h>
#include <stdbool.h>
#define ABC_LEN 26

int q2(char* str1, char* str2);
int str_len(char* str);
bool hist_cmp(int hist1[], int hist2[], int n);
int abs(int num);

int main(){
    char* str1 = "a";
    char* str2 = "";
    int res = q2(str1, str2);
    printf("%d", res);
    return 1;
}
int abs(int num){
    if(num >= 0){
        return num;
    }
    return -1 * num;
}

int str_len(char* str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
bool hist_cmp(int hist1[], int hist2[], int n){
    int diff = 0;
    for(int i = 0; i< n; i++){
        diff += abs(hist1[i]- hist2[i]);
    }
    if (diff == 1){
        return true;
    }
    return false;

}

int q2(char* str1, char* str2){
    int hist1[ABC_LEN] = {0};
    int hist2[ABC_LEN] = {0};
    int len2 = str_len(str2);
    int i = 0;
    int counter = 0;

    while (str2[i] != '\0'){
        hist2[str2[i] - 'a']++;
        i++;
    }

    i = 0;
    while (str1[i] != '\0'){
        hist1[str1[i] - 'a']++;
        if(i >= len2){
            if(hist_cmp(hist1, hist2,ABC_LEN)){
                counter++;
            }
            char first_char = str1[i - len2];
            hist1[first_char - 'a']--;
        }
        i++;
    }
    return counter;

}