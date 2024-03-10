////#include <stdio.h>
//#include <stdbool.h>
////
////
////int midterm_quiz_q1(int d1, int m1, int y1, int d2, int m2,
////                    int y2);
////
////int midterm_quiz_q2(char arr[], int n);
////
////bool q6(int arr[], int n, int k);
////bool q5(char arr1[],char arr2[],int n1, int n2);
////
////
////int main(){
////    char arr1[2] = {'a', 'b'};
////    char arr2[1] = {'a'};
////
////
////    return q5(arr1, arr2, 2, 1);
////}
////
////
////int midterm_quiz_q1(int d1, int m1, int y1, int d2, int m2,
////                    int y2){
////
////
////    if (y1 > y2){
////        return 1;
////    }
////    if (y2>y1){
////        return -1;
////    }
////    if (y1 == y2){
////        if (m1>m2){
////            return 1;
////
////        } else if (m2>m1){
////            return -1;
////        }
////        if (m1 == m2){
////
////            if (d1>d2){
////                return 1;
////
////            } else if(d2>d1){
////                return -1;
////            }
////        }
////    }
////    return 0;
////}
////
////
////int midterm_quiz_q2(char arr[], int n){
////    return 0;
////}
////
////bool q6(int arr[], int n, int k){
////    while (k > 0){
////        int k_last_digit = k % 10;
////        k = k / 10;
////        for(int i = 0; i< n; i++){
////            // if in arr continue to next digit
////            if (arr[i] == k_last_digit){
////                i = n;
////                continue;
////            }
////            //if reaches to end without success return false
////            if (i == n-1 && arr[i] != k_last_digit){
////                return false;
////
////            }
////        }
////    }
////    //if didnt return false return true
////    return true;
////}
////
//bool q5(char arr1[],char arr2[],int n1, int n2){
//    for (int i = 0; i< n1; i++){
//        for (int j = 0; j<n2; j++){
//            if (arr1[i] == arr2[j]){
//                j = n2 - 1;
//                continue;
//            }
//            if(j == n2-1 && arr1[i] != arr2[j]){
//                return false;
//            }
//        }
//    }
//    for (int i = 0; i< n2; i++){
//        for (int j = 0; j < n1; j++){
//            if (arr2[i] == arr1[j]){
//                j = n1 - 1;
//                continue;
//            }
//            if(j == n1-1 && arr2[i] != arr1[j]){
//                return false;
//            }
//        }
//
//    }
//    return true;
//}

