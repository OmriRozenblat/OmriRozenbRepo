//#include <stdio.h>
//#include <stdbool.h>
//#define ABC_LEN 26
//
//int q2(int arr[],int n,int d, int target);
//int calc_dig(int num, int d);
//int recursion_counter(int n, int counter);
//
//int main(){
//    int arr[] = {10,20,30,40};
//    int n = 4;
//    int d = 20000;
//    int target = 2;
//    int res = q2(arr,n,d,target);
//    printf("%d", res);
//    return 1;
//}
//
//int recursion_counter(int n, int counter){
//    if(n == 0){
//        return counter;
//    }
//    return recursion_counter(n-1,counter+1);
//}
//
//int calc_dig(int num, int d){
//    if(num == 0){
//        return 0;
//    }
//
//    return calc_dig(num / d, d) + num % d;
//}
//
//int q2(int arr[],int n, int d, int target){
//    if(n == 0){
//        return -1;
//    }
//    if(calc_dig(*arr, d) == target){
//        return 0;
//    }
//    int res = q2(arr+1, n-1, d,target);
//    if(res == -1){
//        return -1;
//    }
//    return 1 + res;
//}
//
////int q2(int arr[],int n, int d, int target){
////    if(n == 0){
////        return -1;
////    }
////    if(calc_dig(*arr, d) == target){
////        return 0;
////    }
////    return 1 + q2(arr+1, n-1, d,target);
////}