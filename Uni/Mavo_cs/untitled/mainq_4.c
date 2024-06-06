#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 2
void fill_hadamard(int a[N][N]);

void fill_hadamard_aux(int a[N][N], int size , int up, int side, int item);
int main() {
    int arr[N][N];
    fill_hadamard(arr);
    printf("d");

}


void fill_hadamard(int a[N][N]){
    return fill_hadamard_aux(a,N,0,0,1);
}

void fill_hadamard_aux(int a[N][N], int size , int up, int side, int item){
    if(size == 1){
        a[up][side] = item;
        return;
    }
    fill_hadamard_aux(a, size/2, up, side, item);
    fill_hadamard_aux(a, size/2, up, side+size/2+1, item);
    fill_hadamard_aux(a, size/2, up+size/2+1, side, item);
    fill_hadamard_aux(a, size/2, up+size/2+1, side+size/2+1, -item);





}