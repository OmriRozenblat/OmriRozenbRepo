#include <stdio.h>
#include "stdbool.h"
# define max_weight 127*10


int q2(double arr[], int n);
void q3(char* arr[], int n);
int calc_weight(char* str);

void main(){
    double arr[] = { -1, 0, 1, 5};
    int res = q2(arr, 4);
    printf("%d", res);
}



int calc_weight(char* str){
    int i =0;
    int weight = 0;
    while(str[i] != '\0'){
        weight += str[i];
    }
    return weight;
}

int q2(double arr[], int n){
    int right = n-1;
    int left = 0;
    while (right>= left){
        int middle = (right + left) / 2;
        if(arr[middle] > 0 && arr[middle-1] <= 0){
            return middle;
        }
        if(arr[middle] <= 0){
            left = middle;
        } else{
            right = middle;
        }

    }
    return -1;
}

void q3(char* arr[], int n){
    char hist[max_weight][10] = {0}
    
}