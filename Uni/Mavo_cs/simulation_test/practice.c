#include <stdio.h>
#include <stdbool.h>
#define N 5

int max(int arr[ ], int n);

int main() {
    int arr[] = {1,5,3,4,2, 200, 208, 14};
    int max_idex = max(arr, 8);
    printf("%d", max_idex);
    return 0;
}

int max(int arr[ ], int n){
    if (n == 1){
        printf("%d\n", arr[0]);
        return 0;
    }
    if (arr[0]>arr[n-1]){
        return max(arr,n-1);
    } else {
        return 1 + max(arr+1,n-1);
    }
}

