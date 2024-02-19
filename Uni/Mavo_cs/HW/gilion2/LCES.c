#include <stdio.h>
#include <stdlib.h>

void longestContinuousEvenSequence(int arr[], int len);

int main() {
    int len_array = 0;
    // First enter the size of the array
    scanf("%d", &len_array);
    // allocating the array - will be explained later in the course
    int* arr = malloc(sizeof(int) * len_array);
    if(arr) {
        // Enter the numbers that the array will hold
        for (int start_index = 0; start_index < len_array; start_index++) {
            scanf("%d", &(arr[start_index]));
        }
        longestContinuousEvenSequence(arr, len_array);
    }
    // Freeing the array - will be explained later in the course
    free(arr);
    return 0;
}

void longestContinuousEvenSequence(int arr[], int len){
    
}
