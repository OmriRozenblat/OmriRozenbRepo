//#include <stdio.h>
//#include <stdbool.h>
//#define ABC_LEN 26
//
//void q2(int arr[], int n);
//int q3(char letters[], int n);
//int count_couples(int hist[], int weight);
//void swap(int* num1,int* num2);
//
//
//int str_len(char * str);
//
//int main() {
//    char arr[] = {'a','b','a','b','c'};
//    int res = q3(arr, 5);
//    printf("%d", res);
//    return 0;
//}
//
//
//void swap(int* num1,int* num2){
//    int temp;
//    temp = *num1;
//    *num1 = *num2;
//    *num2 = temp;
//}
//
//int count_couples(int hist[], int weight){
//
//    int couples = 0;
//    for(int i = 0; i< ABC_LEN; i++){
//        for(int j = 0; j< ABC_LEN; j++){
//            if(i + j == weight){
//                if(i == j){
//                    couples += (hist[i] + hist[i]-1) / 2;
//                } else {
//                    couples += hist[i] * hist[j] / 2;
//                }
//            }
//        }
//    }
//    return couples;
//}
//
//
//int q3(char letters[], int n){
//    int hist[ABC_LEN] = {0};
//    for(int i = 0; i< n; i++){
//        hist[letters[i] - 'a']++;
//    }
//    int max_num = 0;
//    for(int i = 0; i <= 50; i++){
//        int couple = count_couples(hist, i);
//        if( couple > max_num){
//            max_num = couple;
//        }
//    }
//    return max_num;
//}
//
//
//
//
//
//void q2(int arr[], int n){
//    int even_pointer = 0;
//    int not_even_pointer = 1;
//    if(n==0){
//        return;
//    }
//    while (even_pointer < n-1){
//        if(arr[even_pointer] > arr[not_even_pointer]){
//            swap(&arr[even_pointer], &arr[not_even_pointer]);
//        }
//        even_pointer += 2;
//        if(even_pointer > n-1){
//            return;
//        }
//        if(arr[not_even_pointer] >= arr[even_pointer]){
//            not_even_pointer += 2;
//        } else if(arr[even_pointer] > arr[not_even_pointer]){
//            swap(&arr[even_pointer], &arr[not_even_pointer]);
//            not_even_pointer++;
//        }
//
//    }
//    return;
//}