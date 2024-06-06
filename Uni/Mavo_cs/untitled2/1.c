//#include <stdio.h>
//#include "stdlib.h"
//#include <stdbool.h>
//#define ABC_LEN 26
//
//int q3(int arr[], int n, int k);
//void swap(int* num1, int* num2);
//
//
//int main(){
//    int arr[] = {7,6,5,4};
//    int n = 4;
//    int k = 3;
//    q3(arr,n,k);
//
//    for(int i =0; i<n;i++){
//        printf("%d, ", arr[i]);
//    }
////    int res = q3(arr,n,k);
//
//    return 1;
//}
//
//void swap(int* num1, int* num2){
//    int temp = *num1;
//    *num1 = *num2;
//    *num2 = temp;
//}
//
//
//
//int q3(int arr[], int n, int k){
//    int left_pointer = 0;
//    int right_pointer=n-1;
//
//    for(int i = 0; i<k; i++){
//        right_pointer = n-1;
//        while (left_pointer <= right_pointer){
//            if(arr[right_pointer] %k == i && arr[left_pointer] %k > i
//            || arr[right_pointer] %k == i && arr[left_pointer] %k == i){
//                swap(arr + left_pointer,arr+ right_pointer);
//                left_pointer++;
//            } else {
//                right_pointer--;
//            }
//
//        }
//
//    }
//}
//
//
//
////
////int q3(int arr[], int n, int k){
////
////    for(int i = 0; i<k; i++){
////        int left_pointer = 0;
////        int right_pointer=n-1;
////        while (left_pointer <= right_pointer){
////            if(arr[left_pointer] %k > arr[right_pointer] %k ||
////            arr[left_pointer] %k == arr[right_pointer] %k){
////                swap(arr + left_pointer,arr+ right_pointer);
////                left_pointer++;
////            } else {
////                right_pointer--;
////            }
////
////        }
////
////    }
////}