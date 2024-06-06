#include "stdbool.h"
#include "stdio.h"
#include <stdio.h>

#define ABC_LEN 26

int calc_possibilities(int n,int coins[n], int sum);

int main(){
    int coins[] = {1,2};
    int res = calc_possibilities(2, coins, 4);
    printf("%d", res);

}


int calc_possibilities(int n, int coins[n], int sum){
    if (sum == 0){
        return 1;
    }
    if (n == 0 || sum<0){
        return 0;
    }
    int res = 0;
    for (int i =0; i<n;i++){
        if (sum < coins[i]){
            res += calc_possibilities(n-1,coins+1,sum);
        }
        else{
            res += calc_possibilities(n,coins,sum-coins[i]);
        }

    }
    return res;



}