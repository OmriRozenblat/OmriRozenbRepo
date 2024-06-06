#include <stdio.h>
#include <stdbool.h>
#define ABC_LEN 26

int calc_digit_sum(int arr[], int n);
int calc_digit_sum_aux(int arr[], int n, int* sum);
int find_min_max(int arr[], int n);



int main() {
    int arr[] = {1,2,5,8};
    int res = calc_digit_sum(arr, 4);
    printf("%d", res);
    return 0;
}

int find_min_max(int arr[], int n){

}