//#include <stdio.h>
//#include "stdlib.h"
//#include <stdbool.h>
//#define ABC_LEN 26
//
//
//int str_len(char* str);
//int second_shortest(char* s[], int n);
//int calc_sum(int a[], int x[], int n);
//void print_arr(int a[], int n);
//int printSolution(int a[], int n, int b, int idx, int x[]);
//
//int main(){
//    int arr[] = {3,4,2,1};
//    int b = 10;
//    int x[] = {0,0,0,0};
//    int res = printSolution(arr,4,b,0,x);
//    printf("result: %d", res);
//    return 1;
//}
//
//int calc_sum(int a[], int x[], int n){
//    int sum = 0;
//    for(int i = 0;i<n;i++){
//        sum += a[i] * x[i];
//    }
//    return sum;
//}
//void print_arr(int a[], int n){
//    for(int i = 0; i< n;i++){
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//
//int printSolution(int a[], int n, int b, int idx, int x[]){
//    if (idx == n && calc_sum(a,x,n) == b){
//        print_arr(x,n);
//        return 0;
//    }
//    if(idx == n){
//        return -1;
//    }
//    int i =0;
//    int sum = -1;
//    int res = -1;
//    while (sum <= b){
//        x[idx] = i;
//        sum = calc_sum(a,x,idx+1);
//        if(printSolution(a,n,b,idx+1,x) == 0){
//            res = 0;
//        }
//        i++;
//
//    }
//    return res;
//}
//
//
//
//
//
//int str_len(char* str){
//    int i = 0;
//    while (str[i] != '\0'){
//        i++;
//    }
//    return i;
//}
//int second_shortest(char* s[], int n) {
//    int biggest_index = 0;
//    int biggest_index_len = str_len(s[0]);
//    int second_biggest = 1;
//    int second_biggest_len = str_len(s[1]);
//    int candidate;
//    int temp;
//
//    if(second_biggest_len > biggest_index_len){
//        biggest_index = 1;
//        second_biggest = 0;
//        temp = biggest_index_len;
//        biggest_index_len = second_biggest_len;
//        second_biggest_len = temp;
//    }
//    for(int i = 2; i < n; i++){
//        candidate = str_len(s[i]);
//        if(candidate > biggest_index_len){
//            temp = biggest_index_len;
//            biggest_index_len = candidate;
//            second_biggest_len = temp;
//            temp = biggest_index;
//            biggest_index = i;
//            second_biggest = temp;
//        }
//        if(candidate < second_biggest_len){
//            continue;
//        }
//        if(candidate < biggest_index_len && candidate > second_biggest_len){
//            second_biggest_len = candidate;
//            second_biggest = i;
//        }
//    }
//    return second_biggest;
//
//}