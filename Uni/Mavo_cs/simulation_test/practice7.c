#include "stdbool.h"
#include "stdio.h"
#include <stdio.h>



int FindMissingIndex(int arr[], int n);


int FindMissingIndex(int arr[], int n) {
    int right_index = n - 1;
    int left_index = 0;
    int middle = (right_index + left_index) / 2;
    while(right_index> left_index){
        int margin_index = middle - left_index;
        if (arr[middle]-arr[middle-margin_index] > arr[middle+margin_index]-arr[middle]){
            right_index = middle;
            middle = (left_index+right_index)/2;
        } else{
            left_index = middle;
            middle = (left_index+right_index)/2;
        }

    }

}

int FindMissingIndex(int arr[], int n) {
    int left = 0, right = n - 1;
    int left_d = arr[left + 1] - arr[left],
            right_d = arr[right] - arr[right - 1];
    int d = left_d >= 0 ? min(left_d, right_d) : max(left_d, right_d);
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == arr[0] + d * mid)
            left = mid + 1;
        else right = mid - 1;
    }
    return left;
}