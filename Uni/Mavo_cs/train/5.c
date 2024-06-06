#include <stdio.h>
#include <stdbool.h>
#define ABC_LEN 26


void exam(int arr[], int n, int k);
void swap(int* num1, int* num2);


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int k = 4;
    exam(arr,n,k);
    for(int i =0;i<n;i++){
        printf("%d, ", arr[i]);
    }

    return 1;
}




void swap(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


//int arr[] = {1,2,3,4,5,6,7,8,9};


void exam(int arr[], int n, int k){

    int right_pointer = n-1;
    int left_pointer = 0;
    for(int i = 0; i < k; i++){
        while (right_pointer > left_pointer){
            if((arr[right_pointer] % k) == i && (arr[left_pointer] % k) != i){
                swap(arr+right_pointer,arr+left_pointer);
                left_pointer++;
            } else if((arr[right_pointer] % k) == i && (arr[left_pointer] % k) == i){left_pointer++;
            }


            else {
                right_pointer--;
            }
        }
        right_pointer = n-1;
    }
}