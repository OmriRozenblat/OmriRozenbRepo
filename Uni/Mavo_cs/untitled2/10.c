#include <stdio.h>
#include "stdlib.h"
#include <stdbool.h>
#define ABC_LEN 26

int q2(int arr[], int n, int k);
int binary_search(int arr[], int n);


int main(){
    int arr[] = {9,8,5,2};
    int n = 4;
    int k = 5;
    int res = q2(arr,n,k);
    printf("%d", res);
    return 1;
}


int q2(int arr[], int n, int k){
    int max_num = binary_search(arr, n);
    int left_num = arr[0];
    int wanted_num = left_num + k;
    if(wanted_num > max_num){
        wanted_num =  max_num - (wanted_num - max_num);
    }
    return wanted_num;
}

int binary_search(int arr[], int n){
    int left = 0;
    int right = n-1;
    int middle;
    int max_num;
    while (right >= left) {
        middle = (left + right) / 2;
        if (middle == 0) {
            if (arr[middle] > arr[middle + 1]) {
                max_num = arr[middle];
            } else {
                max_num = arr[middle + 1];
            }
            return max_num;
        }
        if (middle == n - 1) {
            if (arr[middle] > arr[middle - 1]) {
                max_num = arr[middle];
            } else {
                max_num = arr[middle - 1];
            }
            return max_num;
        } else {
            if (arr[middle] > arr[middle - 1] && arr[middle] > arr[middle + 1]) {
                max_num = arr[middle];
                return max_num;
            } else {
                if (arr[middle] > arr[middle + 1]) {
                    right = middle - 1;
                } else {
                    left = middle + 1;
                }
            }


        }
    }
    return -1;
}
