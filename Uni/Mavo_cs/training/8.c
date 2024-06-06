#include <stdio.h>
#include "stdbool.h"
#define ABC_LEN 26

int handle_text(char *st);
int check_sorted_in_averages(int a[], int n);
double check_sorted_in_averages_aux(int a[], int n);
double avg_arr(int arr[], int n);

void main(){
    int arr[] = {90,110,40,50};


    int res = check_sorted_in_averages(arr, 4);
    printf("%d", res);

}
//return ((double)a[0] + (double)a[1]) / 2;

double avg_arr(int arr[], int n){
    

}

double check_sorted_in_averages_aux(int a[], int n){
    if(n==2 && a[0] <= a[1]){
        return 1;
    }
    double res_1 = check_sorted_in_averages_aux(a, n/2);
    double res_2 = check_sorted_in_averages_aux(a+n/2, n/2);
    if (res_1 <= res_2){
        return (res_1 + res_2) /2;
    }
    return -1;


}


int check_sorted_in_averages(int a[], int n){
    if(n==2 && a[0] > a[1]){
        return (a[0] + a[1]) / 2;
    }

    if (check_sorted_in_averages(a, n/2) > check_sorted_in_averages(a+n/2, n/2)){
        return 1;
    }
    return 0;
}

//int handle_text(char *st){
//    int start = 0;
//    int stop = 0;
//    int space_counter = 0;
//    while(*st != '\0'){
//        while(*st == ' '){
//            st++;
//            start++;
//        }
//        stop = start;
//        while (*st != ' '){
//            stop++;
//        }
//        for(int i =0; i< stop-start;i++){
//            st
//        }
//
//
//    }
//
//}