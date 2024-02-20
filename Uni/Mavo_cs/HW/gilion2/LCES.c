#include <stdio.h>
#include <stdlib.h>

void longestContinuousEvenSequence(int arr[], int len);
void copy_arr_to_arr(int arr_1[], int arr_2[], int len);
void print_arr_items(int arr[], int len);

int main() {
//    int len_array = 0;
//    // First enter the size of the array
//    scanf("%d", &len_array);
//    // allocating the array - will be explained later in the course
//    int* arr = malloc(sizeof(int) * len_array);
//    if(arr) {
//        // Enter the numbers that the array will hold
//        for (int start_index = 0; start_index < len_array; start_index++) {
//            scanf("%d", &(arr[start_index]));
//        }
//        longestContinuousEvenSequence(arr, len_array);
//    }
//    // Freeing the array - will be explained later in the course
//    free(arr);

//    int arr[10] = {2, 4,6,6,4,11,14,16,18,23};
//    int arr[10] = {2, 4,6,8,4,11,14,16,18,23};
    int arr[10] = {0, 2, 4, 8, 10, 12};
//    int arr[10] = {1,1,1};


    longestContinuousEvenSequence(arr, 6);
    return 0;
}


void longestContinuousEvenSequence(int arr[], int len){
    int seq_arr[len], temp_arr[len];
    int main_seq_counter = 0;
    int second_pointer = 1;
    for (int i =0; i < len; i++){
        if (arr[i] % 2 == 0){
            //check if the item after it is +2
            while (arr[i+second_pointer] - arr[i+second_pointer-1] == 2){
                if (second_pointer == 1){
                    temp_arr[0] = arr[i];
                }
                //add the item to the temp sequence array
                temp_arr[second_pointer] = arr[i+second_pointer];
                second_pointer += 1;
            }
            //if the array is bigger, run-over the current sequence array
            if (second_pointer > main_seq_counter){
                copy_arr_to_arr(seq_arr, temp_arr, len);
                //skip to the next item after the sequence
                i = i + second_pointer;
                //count the sequence length
                main_seq_counter = second_pointer;
                second_pointer = 1;
            }
        }
    }
    //prints
    if (main_seq_counter == 0){
        printf("No even sequence in the array");
    } else{
        print_arr_items(seq_arr, main_seq_counter);
    }

}

void copy_arr_to_arr(int arr_1[], int arr_2[], int len){
    for (int j = 0; j< len; j++){
        arr_1[j] = arr_2[j];
    }
}

void print_arr_items(int arr[], int len){
    printf("The longest sequence with continuous even numbers is: ");
    for (int i=0; i< len; i++){
        printf("%d ", arr[i]);
    }
}