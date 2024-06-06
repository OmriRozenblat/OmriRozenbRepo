#include <stdio.h>
#include "stdbool.h"


int FindFixedPoint (int a[], int n);

void reverse_words(char *str);
void reverse_string(char *str, int n);
void swap(char* str1, char* str2);
int str_len(char* str);



void main(){
    int arr[] = { -3, -2, 0, 3};
    int res = FindFixedPoint(arr, 4);
    printf("%d", res);
}



int FindFixedPoint (int a[], int n){
    int left = 0;
    int right = n-1;
    int middle;
    while (left <= right){
        middle = (left + right) / 2;
        if (a[middle] == middle){
            return middle;
        }
        if(a[middle] > middle){
            right = middle - 1;
        } else {
            left = middle+1;
        }
    }
    return -1;
}

int str_len(char* str){
    int i = 0;
    while (str[i]!= '\0'){
        i++;
    }
    return i;
}


void swap(char* str1, char* str2){
    char temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void reverse_string(char *str, int n){
    int i = 0;
    while (i < n/2){
        swap(str+i, str+n-1-i);
        i++;
    }
}

void reverse_words(char *str) {
    reverse_string(str, str_len(str));
    int i =0;
    while (str[i] != '\0'){
        int j = 0;
        while (str[j] == ' '){
            j++;
        }
        


        i++;
    }

}
