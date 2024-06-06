#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 5


int solvepuzzle(int p[N*N][4], int board[N][N]);

int main() {
    int arr[] = {1,3,5,7,8,9,13,15,20,22,24,28};
    int res = interp_search(arr, 12,13);
    printf("%d", res);
}

int solvepuzzle(int p[N*N][4], int board[N][N]){
    
}

