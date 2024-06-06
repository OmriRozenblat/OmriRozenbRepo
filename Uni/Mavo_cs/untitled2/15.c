#include <stdio.h>
#include "stdlib.h"
#include <stdbool.h>
#define ABC_LEN 26

int sameAvgGroups(int a[],int n, int res[]);
int sameAvgGroups_aux(int a[],int n, int res[],int avg1, int avg2,int idx);



int main(){
    int a[] = {1,2};
    int res_arr[] = {0,0};

    int res = sameAvgGroups(a,2,res_arr);
    printf("max sum: %d", res);
    return 1;
}


int sameAvgGroups(int a[],int n, int res[]){
    return sameAvgGroups_aux(a,n,res,0,0,0);

}

int sameAvgGroups_aux(int a[],int n, int res[],int avg1, int avg2,int idx){
    if(avg1== avg2 && idx == n+1){
        return idx;
    }
    if(idx == n+1){
        return 0;
    }

    return sameAvgGroups_aux(a+1,n-1,res,(avg1*idx+a[0])/(idx+1),avg2,idx+1) ||
            sameAvgGroups_aux(a+1,n-1,res,avg1,(avg2*idx+a[0])/idx,idx);



}