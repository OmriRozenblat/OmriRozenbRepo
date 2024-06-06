//#include <stdio.h>
//#include <stdbool.h>
//#define ABC_LEN 26
//
//bool builds(char* s1, char* s2);
//bool is_empty(int arr[],int n);
//void copy_arr(int arr1[],int arr2[], int n);
//int first_run(int a[], int n);
//int number_of_runs(int a[], int n);
//int middle_run(int a[], int n);
//
//
//
//
//
//int main() {
//    int arr[] = {12,5,7,8,6,5,11,20,25};
//    int res = middle_run(arr, 9);
//    printf("%d", res);
//    return 0;
//}
//
//bool is_empty(int arr[],int n){
//    for(int i =0; i<n; i++){
//        if(arr[i] != 0){
//            return false;
//        }
//    }
//    return true;
//}
//
//void copy_arr(int arr1[],int arr2[], int n){
//    for(int i =0; i<n; i++){
//        arr1[i] = arr2[i];
//    }
//}
//
//bool builds(char* s1, char* s2){
//    int hist[ABC_LEN] = {0};
//    int back_up_hist[ABC_LEN] = {0};
//    int s1_len = 0;
//    while(*s1 != '\0'){
//        hist[*s1 - 'a']++;
//        back_up_hist[*s1 - 'a']++;
//        s1_len++;
//        s1++;
//    }
//    int counter = 0;
//    while(*s2 != '\0'){
//        while (counter < s1_len){
//            hist[*s2 - 'a']--;
//            counter++;
//            s2++;
//        }
//        if(!is_empty(hist, ABC_LEN)){
//            return false;
//        }
//        counter = 0;
//        copy_arr(hist, back_up_hist, ABC_LEN);
//
//    }
//    return true;
//}
//
//int first_run(int a[], int n){
//    int counter = 1;
//    int i = 0;
//    while(i < n){
//        if(a[i+1] >= a[i]){
//            counter++;
//            i++;
//        } else{
//            break;
//        }
//    }
//    return counter;
//}
//
//
//int number_of_runs(int a[], int n){
//    int counter = 0;
//    int i = 0;
//    while (i < n){
//        int len = first_run(a+i,n-counter);
//        counter += 1;
//        i+=len;
//    }
//    return counter;
//}
//
//int middle_run(int a[], int n){
//    int index = number_of_runs(a,n) / 2;
//    int counter = 0;
//    int i = 0;
//    while (i < n){
//        int len = first_run(a+i,n-counter);
//        counter += 1;
//        if(counter == index+1){
//            return i;
//        }
//        i+=len;
//    }
//
//}