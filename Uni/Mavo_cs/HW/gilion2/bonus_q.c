//https://chat.openai.com/share/35796460-3631-4212-8213-21465831c5af

#include <stdio.h>
void print_arr(int arr[], int n);
void read_arr(int arr[], int n);
void midterm_quiz_q3(int arr[], int n, int k);
int count_duplicate(int arr[]);

#define MAX_LEN 5
int main() {
    int n, k;
//    int arr[MAX_LEN] = { 0 };
//    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_LEN) {
//        return 1;
//    }
//    if (scanf("%d", &k) != 1) {
//        return 2;
//    }
//    read_arr(arr, n);
    n = 5;
    k = 3;
    int arr[] = {1,1,3,4,5};
//    midterm_quiz_q3(arr, n, k);
//    print_arr(arr, n);
    count_duplicate(arr);
    return 0;
}

void read_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


void midterm_quiz_q3(int arr[], int n, int k) {
    k = k % n;
    int last = arr[n-1];
    int empty = n-1;

    for (int i = 0; i < k; i++){
        if (empty - k < 0){
            k = -1 * (n-1+k);
        }
        arr[empty] = arr[empty-k];
        empty = empty - k;

    }
    arr[empty] = last;
}



int count_duplicate(int arr[]){
    int shown[MAX_LEN] = { 0 };
    for (int i = 0; i< MAX_LEN; i++){

    }

    return  0;
    }











//void midterm_quiz_q3(int arr[], int n, int k) {
//    k = k % n;  // Handle cases where k is larger than the array size
//
//    int temp[n];
//
//    // Copy the last k elements to the temporary array
//    for (int i = 0; i < k; i++) {
//        temp[i] = arr[n - k + i];
//    }
//
//    // Shift the remaining elements to the right
//    for (int i = n - 1; i >= k; i--) {
//        arr[i] = arr[i - k];
//    }
//
//    // Copy the temporary array back to the beginning of the original array
//    for (int i = 0; i < k; i++) {
//        arr[i] = temp[i];
//    }
//}



