#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int interp_search(int *A, int n, int b);


int main() {
    int arr[] = {1,3,5,7,8,9,13,15,20,22,24,28};
    int res = interp_search(arr, 12,13);
    printf("%d", res);
}



int interp_search(int *A, int n, int b) {
    if (n <= 0){
        return 0;
    }

    int search_point =(b - *A) *(n-1)/(A[n-1]-*A);
    if (A[search_point] == b){
        return 1;

    }
    if (b<A[search_point]){
        return interp_search(A,search_point-1,b);
    } else{
        return interp_search(A+search_point+1,n-search_point-1,b);
    }

}