#include "stdbool.h"
#include "stdio.h"
#include <stdio.h>

#define ABC_LEN 26

int q3(int* a[], int n, int m);

int main(){
    int arr[4][5] = {{-7,-3,-1,3,5},
                     {-3,-2,2,4,6},
                     {-1,1,3,5,8},
                     {3,4,7,8,9}
    };
    int res = q3(arr, 4,5);
    printf("%d", res);
}

int q3(int* a[], int n, int m){
    int counter = 0;
    for(int row = n-1; row >= 0; row--){
        for(int col = m-1; col >= 0; col--){
            if(col != )
            if (a[row][col] < 0){
                counter += (row)*(col);
                for(int i=1;i<n-row;i++){
                    if(a[row+i][col]<0){
                        counter++;
                    }
                }
                for(int j=0;j<m-col;j++){
                    if(a[row][col+j]<0){
                        counter++;
                    }
                }
            }
    }
    }
    return counter;
}