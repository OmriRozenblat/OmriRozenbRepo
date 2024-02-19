#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int);
int calc_num_length(int num);
bool calc_num_sum_even(int num);
int isDoublePalindrome(int num);

int main(){
    int num;
    printf("Please enter a number:\n");
    if(scanf("%d", &num) != 1){
        return 0;
    }
    if(isDoublePalindrome(num) == 1){
        printf("The number %d is palindrome", num);
    }else if (isDoublePalindrome(num) == 2){
        printf("The number %d is double palindrome", num);
    }else{
        printf("The number is not palindrome");
    }
}

int isDoublePalindrome(int num){
    bool is = is_palindrome(num);
    int res = is;
    if (is == true){
        bool is_even = calc_num_sum_even(num);
        res += is_even;
        return res;
    }
    return  res;
}

bool is_palindrome(int num) {

    int num_len = calc_num_length(num);
    int palindrome_nums_array[num_len];
    int temp_num = num;

    //add palindrome numbers to array
    for (int i = 0; i<num_len;i++) {
        palindrome_nums_array[i] = temp_num % 10;
        temp_num = temp_num / 10;
    }

    int start_counter = 0;
    int end_counter = num_len-1;
    // iterate thrugh the array and see if its pellindrom
    while (start_counter <= end_counter) {
        if (palindrome_nums_array[start_counter] == palindrome_nums_array[end_counter]){
            start_counter += 1;
            end_counter -= 1;
        } else {
            return  false;
        }
    }
    return true;
    }

int calc_num_length(int num) {
    //count digits
    int num_length = 1;

    int temp_num = num;
    if (num > 9) {
        while (temp_num > 9) {
            num_length += 1;
            temp_num = temp_num / 10;
        }
    }
    return num_length;
}
bool calc_num_sum_even(int num){
    int temp_num = num;
    int sum = 0;
    while (temp_num > 9) {
        sum += temp_num % 10;
        temp_num = temp_num / 10;
    }
    sum += temp_num % 10;
    if (sum % 2 == 0){
        return  true;

    }
    return false;
}
