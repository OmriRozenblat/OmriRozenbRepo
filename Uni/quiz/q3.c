#include <stdio.h>
#include <stdbool.h>




double midterm_q3(double arr[], int n, int idx);


int main() {
    double arr[] = {10,9,8,7,-6,5, -6, 7};
    midterm_q3(arr, 8, 5);
    return 0;
}


double midterm_q3(double arr[], int n, int idx){

    double num1, num2, num3, num4;
    num1 = arr[idx-2];
    num2 = arr[idx-1];
    num3 = arr[idx+1];
    num4 = arr[idx+2];
     //make sure if out of range -  its 0
    if (idx-2 < 0){
        num1 = 0;
    }
    if (idx-1< 0){
        num2 = 0;
    }

    if (idx+1> n-1){
        num3 = 0;
    }

    if (idx+2>n-1){
        num4 = 0;
    }
    return 0.1*num1 + 0.2*num2 + 0.4*arr[idx] + 0.2*num3 + 0.1*num4;

}