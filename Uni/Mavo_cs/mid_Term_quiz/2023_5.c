#include <stdio.h>
#include <stdbool.h>
#define ascii_size 128

void midterm_quiz_q1(int array[], int n);
void midterm_quiz_q2(char array[], int n, int k);
int find_max(int arr[],int n);
void midterm_quiz_q3(int array [], int n);

int main(){
    //    char arr[7] = {'@','1','3','$','@','3','@'};
    char arr[1] = {'1'}    ;
    int n = 1;
    midterm_quiz_q2(arr, n,-1);
}





void midterm_quiz_q1(int array[], int n){
    for (int i = 0; i< n; i++){
        int apperance_counter = 0;
        for (int j = 0; j<n; j++){
            if (i == j){
                continue;
            }
            if (array[i]> array[j] && array[j]> 0){
                apperance_counter++;
            }

        }
        printf("Numbers smaller than %d: %d\n", array[i], apperance_counter);
    }
}




void midterm_quiz_q2(char array[], int n, int k) {

    int nums_in_arr = n;
    int exact_counter = 0;
    for(int i = 0; i < n; i++){
        int apparences_counter = 0;
        for (int j = 0; j < n; j++){
            if(array[i] == array[j]){
                if (i<=j){
                    apparences_counter++;
                }
                if (j<i){
                    j = n;
                    continue;
                }
            }
        }
        if (apparences_counter>0){
            nums_in_arr -= (apparences_counter-1);
        }

        if (k == apparences_counter){
            exact_counter ++;
        }

    }
    if(k==0){
        exact_counter = 128-nums_in_arr;
    }
    printf("Amount of chars that appear %d times: %d", k, exact_counter);

}



int find_max(int arr[],int n){
    int max = arr[0];
    for(int i = 0; i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
void midterm_quiz_q3(int array [], int n){

    int k = find_max(array, n);
    while(k > 0){
        int temp = array[n-1];
        for (int i = 1; i<n; ++i){
            array[n-i] = array[n-i-1];
        }
        array[0] = temp;
        k = k-1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}