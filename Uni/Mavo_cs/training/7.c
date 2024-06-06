#include <stdio.h>
#include "stdbool.h"
#define ABC_LEN 26

int find_mistake(int dist[], int n);
int num_unbeatable(char* s);
bool first_cond(char* s, int size);
bool second_cond(char* s, int size);


void main(){
//    char* str = "20AB5DcDabc67";
    char* str = "ABC123";

    int res = num_unbeatable(str);
    printf("%d", res);

}

int find_mistake(int dist[], int n){
    int right = n-1;
    int left = 0;
    int middle;
    while(right >= left && middle != 0){

        middle = (right + left) / 2;

        if(dist[middle] > dist[middle-1]){
            return middle;
        }

        if(dist[middle] <= dist[middle-1] && dist[middle] <= dist[left]){
            left = middle+1;

        } else {
            right = middle-1;
        }

    }
    return -1;
}


bool first_cond(char* s, int size){
    int num_counter = 0;
    int small_letters_counter = 0;
    int big_letter_counter = 0;
    int len = 0;
    int i =0;

    while (i <= size){
        if(*s >='0' && *s <='9'){
            num_counter++;
        }
        if(*s >= 'a' && *s <='z'){
            small_letters_counter++;
        }
        if(*s >= 'A' && *s <= 'Z'){
            big_letter_counter++;
        }
        s++;
        len++;
        i++;
    }
    if(num_counter != 1){
        return false;
    }
    if(big_letter_counter != 1){
        return false;
    }
    if(small_letters_counter != 4){
        return false;
    }
    if(len != 6){
        return false;
    }
    return true;
}

bool second_cond(char* s, int size) {
    int num_counter = 0;
    int big_letter_counter = 0;
    int i = 0;
    while (i <= size){
        if(*s >='0' && *s >='9'){
            num_counter++;
        }

        if(*s >= 'A' && *s <= 'Z'){
            big_letter_counter++;
        }
        s++;
        i++;
    }
    if(num_counter != 3){
        return false;
    }
    if(big_letter_counter > 3){
        return false;
    }

    return true;
}


int num_unbeatable(char* s){
    int counter = 0;
    int i = 0;
    while(s[i]){
        int j=0;
        while (s[j+i]){
            if(first_cond(s+i, j-i) || second_cond(s+i, j-i)){
                counter++;
            }
            j++;
        }
        i++;
    }
    return counter;
}