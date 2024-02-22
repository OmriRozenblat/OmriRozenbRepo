//#include <stdio.h>
//#include <stdbool.h>
//#define array_length 10 //max length of int num
//
//bool is_palindrome(int num, int num_len);
//int calc_num_length(int num);
//bool calc_num_sum_even(int num);
//int isDoublePalindrome(int num);
//
//int main(){
//    int num;
//    printf("Please enter a number:\n");
//    if(scanf("%d", &num) != 1){
//        return 0;
//    }
//    int res = isDoublePalindrome(num);
//    if(res == 1){
//        printf("The number %d is palindrome", num);
//    } else if (res == 2){
//        printf("The number %d is double palindrome", num);
//    } else {
//        printf("The number is not palindrome");
//    }
//}
//
//int isDoublePalindrome(int num){
//    int num_len = calc_num_length(num);
//    int res = is_palindrome(num, num_len);
//    if (res == true){
//        bool is_even = calc_num_sum_even(num);
//        res += is_even;
//        return res;
//    }
//    return res;
//}
//
//bool is_palindrome(int num, int num_len) {
//    int palindrome_nums[array_length] = {0};
//    int temp_num = num;
//
//    //add palindrome numbers to array
//    for (int i = 0; i < num_len; i++) {
//        palindrome_nums[i] = temp_num % 10;
//        temp_num = temp_num / 10;
//    }
//
//    int start_counter = 0;
//    int end_counter = num_len-1;
//    // iterate through the array and see if its palindrome
//    while (start_counter <= end_counter) {
//        if (palindrome_nums[start_counter] == palindrome_nums[end_counter]){
//            start_counter += 1;
//            end_counter -= 1;
//        } else {
//            return  false;
//        }
//    }
//    return true;
//    }
//
//int calc_num_length(int num) {
//    //count digits
//    int num_length = 1;
//    int temp_num = num;
//
//    while (temp_num > 9) {
//        num_length += 1;
//        temp_num = temp_num / 10;
//    }
//    return num_length;
//}
//bool calc_num_sum_even(int num){
//    int temp_num = num;
//    int sum = 0;
//    while (temp_num > 9) {
//        sum += temp_num % 10;
//        temp_num = temp_num / 10;
//    }
//    sum += temp_num % 10;
//    if (sum % 2 == 0){
//        return  true;
//
//    }
//    return false;
//}
