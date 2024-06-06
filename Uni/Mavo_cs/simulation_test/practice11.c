//#include "stdbool.h"
//#include "stdio.h"
//#include <stdio.h>
//#define ABC_LEN 26
//
//#define ABC_LEN 26
//
//int step_function(char* str);
//double max_average(int a[], int n, double* avg);
//int recursive_binary_search(int arr[], int n, int num,int idx);
//
//
//
//int main(){
//    int arr[] = {0,1,2,3,4,5,6};
//    int res = recursive_binary_search(arr,7,4,0);
//    printf("%d", res);
//
//}
//
//double max_average(int a[], int n, double* avg){
//    if (n==0){
//        if(avg[0] < a[0]){
//            return a[0];
//        }
//        return avg[0];
//    }
//
//    avg[0] = a[0] + max_average(a+1, n-1, avg);
//    return avg[0];
//}
//int recursive_binary_search(int arr[], int n, int num,int idx){
//    int left_pointer = 0;
//    int right_pointer = n-1;
//    int middle = (left_pointer + right_pointer) / 2;
//    if(left_pointer == right_pointer){
//        if(arr[middle] == num){
//            return idx;
//        }
//        return -1;
//    }
//    if(arr[middle] == num){
//        return idx;
//    }
//    if(arr[middle] > num){
//        idx = recursive_binary_search(arr, middle,num,idx-middle);
//    } else{
//        idx = recursive_binary_search(arr+middle+1, middle,num,idx+middle);
//    }
//    return idx;
//}
//
//
//int step_function(char* str){
//    int i = 1;
//    while(str[i-1] != 'b'){
//        i*=2;
//    }
//    return i-1;
//}