#include <stdio.h>

int exist(int x, int a[], int n);
int intersect(int a[], int n1, int b[], int n2);



int main() {
    int a[] = {1};
    int b[] = {5,3,1,1,5,8};
    int res = intersect(a,1,b,6);
    printf("%d", res);
    return 0;
}
int exist(int x, int a[], int n){
    for(int i =0; i<n; i++){
        if(a[i] == x){
            return 1;
        }
    }
    return 0;
}

int intersect(int a[], int n1, int b[], int n2) {
    if (n1 == 0){
        return 0;
    }

    if(exist(a[0],a+1,n1-1)) {
        intersect(a+1, n1-1, b, n2);
    }
    else {
        if(exist(a[0],b,n2)){
            return 1+ intersect(a+1,n1-1, b,n2);
        } else {
            return intersect(a+1,n1-1, b,n2);
        }
    }

}