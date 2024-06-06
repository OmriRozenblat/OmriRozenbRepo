#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define N 10


int is_identical(int a[N][N], int x1, int y1, int x2, int y2, int
k);






int is_identical(int a[N][N], int x1, int y1, int x2, int y2, int
k){
    int nine_counter = 0;
    int oneeighty_counter = 0;
    int twoseven = 0;

    for (int i=0;i<k;i++){
        for (int j=0;j<k;j++){
            if (a[y1+i][x1+j] == a[k-(y1+i)][k-(x1+j)]){
                oneeighty_counter+=1;
            }
            if (a[y1+i][x1+j] == a[x1+j][k+1-(y1+i)]){
                nine_counter+=1;

            }
            if (a[y1+i][x1+j] == a[k+1-(x1+j)][y1+i]){
                twoseven+=1;

            }

        }

    }
    if(oneeighty_counter == k*k || nine_counter == k*k || twoseven == k*k){
        return 1;
    }
    return 0;
}







