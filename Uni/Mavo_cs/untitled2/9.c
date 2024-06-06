#include <stdio.h>
#include "stdlib.h"
#include <stdbool.h>
#define ABC_LEN 26

void merge(int a[], int na, int b[], int nb, int c[]);
void internal_merge_sort(int* a, int n, int helper[]);

void merge(int a[], int na, int b[], int nb, int c[]){
    int ia = 0;
    int ib = 0;
    int ic = 0;
    for(;ia<na && ib< nb;ic++){
        if(a[ia] > b[ib]){
            c[ic] = b[ib];
            ib++;
        } else {
            c[ic] = a[ia];
            ia++;
        }

    }

    for (;ia<na;ic++){
        c[ic] = a[ia];
        ia++;
    }
    for (;ib<nb;ic++){
        c[ic] = b[ib];
        ib++;
    }

}
void internal_merge_sort(int a[], int n, int helper[]){
    if(n<2){
        return;
    }

}

void merge_sort(int a[], int na){

    int* temp_arr =  malloc(sizeof (int)*na);
    internal_merge_sort(a,na,temp_arr);


}

void internal_merge_sort(int* a, int n, int helper[]){
    if (n < 2){
        return;
    }
    int left = n/2;
    int right = n-left;
    internal_merge_sort(a, left, helper);
    internal_merge_sort(a+left+1, n-left-1, helper);
    merge(a, left,a+left+1, n-left-1, helper);

}