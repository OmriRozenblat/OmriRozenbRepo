//#include <stdio.h>
//#include "stdlib.h"
//#include <stdbool.h>
//#define ABC_LEN 26
//
//
//int partition(int a[],int na);
//int swap(int *a, int *b);
//void quick_sort(int a[], int n);
//
//int main(){
//
//    return 1;
//}
//
//int partition(int a[],int na){
//    int t = na-1;
//    int b = 0;
//    int p = a[0];
//
//    while (b<=t) {
//        while (b <= t && a[t] >= p) {
//            t--;
//        }
//        while (b <= t && a[b] < p) {
//            b++;
//        }
//        if (b < t) {
//            swap(a + b, a + t);
//            b++;
//            t--;
//        }
//
//    }
//    swap(a, a+t);
//    return t;
//
//}
//
//void quick_sort(int a[], int n){
//    if(n<2){
//        return ;
//    }
//    swap(a,a+n/2);
//    int p = partition(a,n);
//    quick_sort(a,p);
//    quick_sort(a+p+1,n-p-1);
//}
//
