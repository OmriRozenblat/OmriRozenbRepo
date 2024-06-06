//#include <stdio.h>
//#include <stdbool.h>
//#define ABC_LEN 26
//#define letter_range 127
//
//int longest_seq(int arr[], int n);
//void swap(int* num1, int * num2);
//
//int main(){
//
//    int arr[] = {1, 12, -4, 2, -2, -9, -2, -1, 1, 1, 2};
//    int res = longest_seq(arr, 11);
//
//
//    return res;
//}
//
//int longest_seq(int arr[], int n){
//    int left_pointer = 0;
//    int right_pointer = 0;
//    int longest_seq = 0;
//    int min_index;
//    int max_index = 0;
//    while (right_pointer<n){
//        if(arr[right_pointer] > 0){
//            right_pointer++;
//            if(right_pointer - left_pointer > longest_seq){
//                longest_seq = right_pointer - left_pointer ;
//                min_index = left_pointer;
//                max_index = right_pointer;
//
//            }
//
//        } else {
//            right_pointer++;
//            left_pointer = right_pointer;
//        }
//
//    }
//    for(int i = min_index; i<max_index;i++){
//        printf("%d, ", arr[i]);
//    }
//    return longest_seq;
//}
//
//int partition(int arr[], int n){
//    int p =arr[0];
//    int b = 1;
//    int t = n-1;
//    while (b<=t){
//        if(b<=t && arr[t] >= p){
//            t--;
//        }
//        if(b<=t && arr[b] < p){
//            b++;
//        }
//        if(b<t){
//            swap(arr+b, arr+t);
//            b++;
//            t--;
//        }
//
//    }
//    swap(arr, arr+t);
//    return t;
//}