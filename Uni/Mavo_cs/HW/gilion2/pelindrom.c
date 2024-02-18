#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int);
int calc_num_length(int num);
bool calc_num_sum_even(int num);


int main() {
    printf("Please enter a number:\n");

//    scanf(" %u", &num);
//    printf("%u", num);
    int num = 64577546;
    bool is = is_palindrome(num);
    int res = is;
    if (is == true){
        bool is_even = calc_num_sum_even(num);
        res += is_even;
        return res;
    }
    printf("%d", res);
    return  res;

}


bool is_palindrome(int num) {

    int num_len = calc_num_length(num);
    int pelindrom_nums_array[num_len];
    int temp_num = num;

        //add pellindrom numbers to array
    for (int i = 0; i<num_len;i++){
        pelindrom_nums_array[i] = temp_num % 10;
        temp_num = temp_num / 10;
    }

    int start_counter = 0;
    int end_counter = num_len-1;
    // iterate thrugh the array and see if its pellindrom
    while (start_counter <= end_counter) {
        if (pelindrom_nums_array[start_counter] == pelindrom_nums_array[end_counter]){
            start_counter += 1;
            end_counter -= 1;
            continue;
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
