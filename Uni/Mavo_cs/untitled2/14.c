#include <stdio.h>
#include "stdlib.h"
#include <stdbool.h>
#define ABC_LEN 26

int change(int coins[], int n, int sum);
int maxseq(int a[], int n, int* id, int* len);


int main(){
    int arr[] = {-5,3,2,-1,5,1,-2};
    int id = 0;
    int len = 0;
    int* id_ptr = &id;
    int* len_ptr = &len;

    int res = maxseq(arr,7,id_ptr,len_ptr);
    printf("id: %d, len: %d", *id_ptr, *len_ptr);
    printf("max sum: %d", res);
    return 1;
}

int maxseq(int a[], int n, int* id, int* len){
    int max_len = 0;
    int start_index = 0;
    int max_sum = 0;
    int temp_sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i;j<n;j++){
            temp_sum+=a[j];
            if(temp_sum > max_sum){
                start_index = i;
                max_len = j-i + 1;
                max_sum = temp_sum;
            }
        }
        temp_sum = 0;
    }
    if(max_sum == 0){
        *id = 0;
        *len = 0;
    }
    *id = start_index;
    *len = max_len;
    return max_sum;
}

int change(int coins[], int n, int sum){
    if(n == 0 && sum == 0){
        return 1;
    }
    if(n == 0 || sum < 0){
        return 0;
    }

    return change(coins,n, sum-coins[0])
    + change(coins+1,n-1, sum);



}