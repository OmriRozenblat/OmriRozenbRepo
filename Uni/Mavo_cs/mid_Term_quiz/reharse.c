#include <stdio.h>
#include <stdbool.h>

int q1(int arr[], int n, int x);
int q2(int arr[], int n, int x);
char q3(int arr[], int n);
void q4(double arr[], int n, double x);



int main(){
    double arr[] = {1.2,1.6,1.1,1.5,3.7,4.8, 6.8};
    q4(arr, 7, 0.5);
//    printf("%lf", a);
    return 0;
}

int q1(int arr[], int n, int x){
    int couple_counter = 0;
    for (int i = 0; i < n;i++){
        for(int j=i+1; j<n;j++){
            if((arr[i] + arr[j]) == x){
                couple_counter++;
            }
        }
    }
    return couple_counter ;
}

int q2(int arr[], int n, int x){
    if(x<arr[0]){
        return 0;
    }
    for (int i=0;i<n-1;i++){
        if(x>=arr[i] && x<arr[i+1]){
            return i+1;
        }
    }
    return n;
}


char q3(int arr[], int n){
    int hist[10] = {0};

    for(int i = 0; i<n; i++){
        hist[arr[i]] += 1; // count apperances
    }
    int max_value = 1, min_value = 1;

    for (int i = 0; i<10;i++) {
        if (hist[i] > max_value) {
            max_value = hist[i];
        }
        if (hist[i] < min_value && hist[i] != 0) {
            min_value = hist[i];
        }
    }
    int avg = (min_value + max_value)/2;
    if (n > avg){
        return arr[avg] + '0';
    }
    return -1;

    }


void q4(double arr[], int n, double x){
    double sum = 0;
    for(int i = 0; i< n; i++){
        int num = (int)(arr[i]*10) % 10;
        double point_num = (double)num / 10;
        if (point_num < x){
            sum += arr[i];
        }
    }
    printf("%lf", sum);
}