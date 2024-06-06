#include "stdio.h"


int exist(int x, int a[], int n);
int intersect(int a[], int n1, int b[], int n2);
int find_one(int a[], int n1, int b[], int n2);


        int main(){
    int a[] = {5,3,1,1,5,8};
    int b[] = {8,1,3,5,};
    int res = intersect(a, 6, b, 4);
    printf("%d", res);

}

int exist(int x, int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return 1; // x found in the array
        }
    }
    return 0; // x not found in the array
}

int intersect(int a[], int n1, int b[], int n2) {
    if(n1 == 0){
        return 0;
    }
    if(exist(a[0],a+1,n1-1)) {
        return intersect(a+1,n1-1,b,n2);
    }
    else {
        if(exist(a[0],b,n2)){
            return 1+ intersect(a+1,n1-1,b,n2);
        }
    }
    return intersect(a+1,n1-1,b,n2);

}


int find_one(int a[], int n1, int b[], int n2){
    if(n1==0){
        return -1;
    }
    if(intersect(a,n1,b,n2) == 1){
        
    }
}