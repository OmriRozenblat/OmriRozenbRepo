//#include <stdio.h>
//#include "stdbool.h"
//# define ABC_LEN 26
//
//int LongestSequence (int a[], int n, int k);
//int ShortestSubstring(char *str);
//bool is_full(char *str, int n_full);
//
//
//
//    int main() {
////        int arr[] = { 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0 };
////        int n = 12;
////        int k = 1;
//
//    int res = ShortestSubstring("aabcaadefacebaa");
//        printf("%d", res);
//        return 0;
//}
//
//bool is_full(char *str, int n_full){
//    int i = 0;
//    int n_counter = 0;
//    while (str[i] != '\0'){
//        if(str[i] != 0){
//            n_counter ++;
//        }
//    }
//    if(n_counter == n_full){
//        return true;
//    }
//    return false;
//    }
//
//int ShortestSubstring(char *str){
//    int hist[ABC_LEN] = {0};
//    int max_len = 0;
//    int i=0;
//    int n_counter = 0;
//    while(str[i] != '\0'){
//        int char_index = str[i] - 'a';
//        if(hist[char_index] != '\0'){
//            n_counter++;
//        }
//        hist[char_index]++;
//        i++;
//    }
//    int left_pointer = 0;
//    int right_pointer = i-1;
//    while ((right_pointer-left_pointer)>=n_counter){
//        left
//        if(hist[right_pointer])
//    }
//    for (int i=0;i<ABC_LEN;i++){
//        if(hist[i] > 0){
//            max_len++;
//        }
//    }
//    return max_len;
//}
//
//
//        int LongestSequence (int a[], int n, int k){
//    int max_seq = 0;
//    int app_counter = 0;
//    int temp_max_seq = 0;
//        for(int i = 0; i < n; i++){
//            if (a[i] == 0){
//                app_counter ++;
//            }
//            if (app_counter > k){
//                app_counter = 0;
//                temp_max_seq = 0;
//                continue;
//            }
//
//            temp_max_seq++;
//            if (temp_max_seq > max_seq){
//                max_seq = temp_max_seq;
//            }
//
//        }
//    return max_seq;
//    }