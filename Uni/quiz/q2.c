#include <stdio.h>
#include <stdbool.h>


double midterm_q2(double arr[], int n);



void bubble_sort(double arr[], int n);


int main() {
    double arr[] = {5,4,3,2,2,1};
    midterm_q2(arr, 6);
    return 0;
}

void bubble_sort(double arr[], int n){
    int len = n-1;
    while (len>=0){
        for (int j = 1; j< n;j++){
            if (arr[j]< arr[j-1]){
                double temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }

        }
        len--;
    }
//    for(int i =0;i<n;i++){
//        printf("%lf\n", arr[i]);
//    }
}


double midterm_q2(double arr[], int n){
    bubble_sort(arr, n);
    if (n==1){
        return arr[0];
    }
    //take the first that is not similiar to the privious
    for(int i = 0;i<n;i++){
        if(arr[i+1]> arr[i]){
            printf("%lf\n", arr[i+1]);
            return arr[i+1];
        }
    }
}




