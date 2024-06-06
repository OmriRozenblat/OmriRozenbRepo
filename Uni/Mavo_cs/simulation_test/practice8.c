#include "stdbool.h"
#include "stdio.h"
#include <stdio.h>

#define ABC_LEN 26


bool elf_language(char* word);
bool aux_elf_language(char* word, int e_cnt,int l_cnt,int f_cnt);
bool middle_earth_language(char* nation, char* word);
bool find_average(int a[], int n, double x);
int calc_avg(int num1, int num2);
int sameAvgGroups(int a[], int n, int res[]);


int main(){
    int arr[] = {2};
    int res = find_average(arr, 1, 3);
    printf("%d", res);

}



bool elf_language(char* word){
    return aux_elf_language(word, 0,0,0);
}



bool aux_elf_language(char* word, int e_cnt,int l_cnt,int f_cnt){
    while(*word != '\0'){
        if(*word == 'e'){
            return aux_elf_language(word+1, e_cnt+1,l_cnt,f_cnt);
        }
        if(*word == 'l'){
            return aux_elf_language(word+1, e_cnt,l_cnt+1,f_cnt);
        }
        if(*word == 'f'){
            return aux_elf_language(word+1, e_cnt,l_cnt,f_cnt+1);
        }

        else{
            return aux_elf_language(word+1, e_cnt,l_cnt,f_cnt);
        }

    }
    if(e_cnt<1 || l_cnt<1 || f_cnt<1 ){
        return 0;
    }
    return 1;

}


bool middle_earth_language(char* nation, char* word){
    int nation_hist[ABC_LEN] = {0};
    int i =0;
    while (nation[i] != '\0'){
        int char_index = nation[i]-'a';
        nation_hist[char_index] = 1;
        i++;
    }
    i =0;
    while (word[i] != '\0'){
        int char_index = word[i]-'a';
        nation_hist[char_index] -= 1;
        i++;
    }
    for(int j=0; j < ABC_LEN; j++){
        if(nation_hist[j]==1){
            return false;
        }
    }
    return true;
}
int calc_avg(int num1, int num2){
    return (num2+num1)/2;
}

bool find_average(int a[], int n, double x){
    int ptr_left = 0;
    int ptr_right = n-1;
    float sum = 0;
    for (int i=0;i<n; i++){
        sum+= a[i];
    }
    for(int i=0;i<n;i++) {
        float avg = sum / (n-i);
        if (avg == x) {
            return true;
        } else {
            if (avg < x) {
                sum -= a[ptr_left];
                ptr_left++;
            }
            if (avg > x) {
                sum -= a[ptr_right];
                ptr_right--;
            }
        }

    }
    return false;

}

//int uax_sameAvgGroups(int a[], int n, int res[])
int sameAvgGroups(int a[], int n, int res[]){


    for (int i = 0; i<n; i++){

    }
}
