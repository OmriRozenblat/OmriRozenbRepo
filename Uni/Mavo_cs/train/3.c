#include <stdio.h>
#include <stdbool.h>
#define ABC_LEN 26

void max_sort(int a[], int n);
int find_max_index(int a[], int n);
void swap(int* int1, int* int2);



int main() {
    int arr[] = {12,5,7,8,6,5,11,20,25};
    int res = middle_run(arr, 9);
    printf("%d", res);
    return 0;
}

void max_sort(int a[], int n){
    for (int len = n; len>0; len--){
        int max = find_max_index(a, len);
        swap(&a[max], &a[len-1]);
        }

    }

void sortPartialSorted(int a[], int n, int k);
