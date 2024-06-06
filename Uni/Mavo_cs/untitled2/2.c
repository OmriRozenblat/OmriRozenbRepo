//#include <stdio.h>
//#include <stdbool.h>
//#define M 2
//#define N 2
//#define SIZE 2
//
//void sort(int mat[M][N], int sorted[SIZE]);
//void merge(int a[], int na, int b[], int nb, int c[]);
//void internal_msort(int a[], int n, int helper[]);
//void merge_sort(int a[], int n);
//
//
//
//int main() {
//
//    int res = is_smooth50(100);
//    printf("%d", res);
//    return 0;
//}
//
//void merge(int a[], int na, int b[], int nb, int c[]){
//    int ia = 0, ib = 0, ic = 0;
//    for(; ia < na && ib < nb; ic++){
//        if(a[ia] > b[ib]){
//            c[ic] = b[ib];
//            ib++;
//        } else {
//            c[ic] = a[ia];
//            ia++;
//        }
//    }
//    for(;ia<na;ia++){
//        c[ic] = a[ia];
//        ic++;
//    }
//    for(;ib<nb;ib++){
//        c[ic] = b[ib];
//        ic++;
//    }
//}
//
//void internal_msort(int a[], int n, int helper[]){
//    int left = n/2;
//    int right = n-left;
//    if(n>= N){
//        return;
//    }
//    internal_msort(a, left, helper);
//    internal_msort(a+left, right, helper);
//    merge(a, left, a+left, right, helper);
//
//}