#include "stdbool.h"
#include "stdio.h"
#include <stdio.h>
#define ABC_LEN 26

#define ABC_LEN 26

void print_patterns(char arr[], int n, char pat[], int m);

int stunning(char arr[]);


int main(){
    int res = stunning("abdff");
    printf("%d", res);

}

void print_patterns(char arr[], int n, char pat[], int m){
    for(int i =0; i< m; i++){
        for (int j=0; j< n;j++){
            if (arr[j] == pat[i]){
                
            }
        }
    }
}

int stunning(char arr[]){
    int highest = 0;
    int temp_highest = 0;

    int i = 0;
    int hist[ABC_LEN] = {0};
    while(arr[i] != '\0'){
        int char_index = arr[i] - 'a';
        if (hist[char_index] != 0){
            if (temp_highest > highest){
                highest = temp_highest;
            }
            temp_highest = 0;
            hist[char_index] = 0;

        } else {
            hist[char_index] += 1;
            temp_highest++;
        }
        i++;
    }
    if (temp_highest > highest){
        highest = temp_highest;
    }
    return highest;

}