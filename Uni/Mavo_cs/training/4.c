#include <stdio.h>
#include "stdbool.h"
# define max_value 200


int q2(int arr[], int n, int x);
int q3(int points[], int n);
int calc_self_comb(int num);

void main(){
    int arr[] = {1,2,1,2,3, 0};
    int res = q3(arr, 6);
    printf("%d", res);
}

int calc_self_comb(int num){
    int sum = 0;
    int i = 1;
    while(num-i != 0){
        sum+= num-i;
        i++;
    }
    return sum;
}

//
//int q2(int arr[], int n, int x){
//    int right = n-1;
//    int left = 0;
//    int middle;
//    while (right >= left){
//        middle = left + right / 2;
//        if (arr[middle] == x){
//            return middle;
//        }
//
//        if(middle % 2 !=0 ){
//            if(arr[middle] < x){
//                if(arr[middle+1] > x ){
//                    right = middle-1;
//                }
//            }
//        }
//
//    }
//
//}

int q3(int points[], int n){
    int hist[max_value] = {0};
    int max_couple = 0;
    int comb_counter = 0;
    int final_k = 0;
    for(int i = 0; i< n; i++){
        hist[points[i]]++;
    }

    for (int k =0; k < max_value*2; k++){

        for(int j = 0; j< max_value; j++){
            for(int x = 0; x< max_value; x++){
                if (j+x == k){
                    if(j == x){
                        comb_counter += calc_self_comb(hist[j]);
                    }
                    comb_counter += hist[j] * hist[x];
                    if(comb_counter > max_couple){
                        max_couple = comb_counter;
                        final_k = k;
                    }
                }
            }
        }
        comb_counter = 0;
    }
    return final_k;
}