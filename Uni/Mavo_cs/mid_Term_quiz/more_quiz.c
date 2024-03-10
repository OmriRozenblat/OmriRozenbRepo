#include <stdio.h>
#include <stdbool.h>

//
//int midterm_quiz_q1(double num);
//bool midterm_quiz_q2(int arr[], int n);
//double midterm_quiz_q3(int arr[], int n, int idx);
//
//
//int main(){
//    //    midterm_quiz_q1(1.459);
//    int arr[3] = {1,2,4};
//    midterm_quiz_q3(arr, 3, 1);
//    return 0;
//
//
//}
//
//
//
//
//
//
//int midterm_quiz_q1(double num){
//    int full_num = (int)(num*1000);
//    int sum = 0;
//    int temp_num = full_num;
//    while (temp_num > 9){
//        sum += temp_num % 10;
//        temp_num = temp_num/10;
//
//    }
//    sum += temp_num;
//    printf("%d", sum);
//    return 0;
//
//}
//
//
//bool midterm_quiz_q2(int arr[], int n){
//    for (int i = 0; i< n; i++){
//        int app_counter = 1;
//        for(int j = 0;j<n;j++ ){
//            if(app_counter>arr[i]){
//                return false;
//            }
//            if(j<i  && arr[i] == arr[j]){
//                j = n-1;
//                app_counter = arr[i];
//                continue;
//            }
//            if(arr[i] == arr[j] && i != j){
//                app_counter+=1;
//            }
//        }
//        if (app_counter != arr[i]){
//            return false;
//        }
//    }
//    return true;
//}
//
//double midterm_quiz_q3(int arr[], int n, int idx){
//    int num_1;
//    int num_2;
//
//    if (idx+1 > n-1){
//        num_1 = 0;
//    } else {
//        num_1 = arr[idx+1];
//    }
//
//    if (idx-1 < 0){
//        num_2 = 0;
//    } else {
//        num_2 = arr[idx-1];
//    }
//    double derivitive = 0.5*(num_1 - num_2);
//    printf("%lf", derivitive);
//    return derivitive;
//}