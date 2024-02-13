#include <stdio.h>
#include <stdbool.h>


int midterm_quiz_q1(double num) {
    int full_num = (int)(num * 1000);
    int temp_full_num = full_num;
    int sum = 0;
    while (temp_full_num > 0){
        sum += temp_full_num % 10;
        temp_full_num = temp_full_num / 10;

    }

    return sum;
}

bool midterm_quiz_q2(int arr[]) {
    bool is_array_special = true;
    int num_counter = 0;
    for(int num_pointer = 0; num_pointer < sizeof(arr) / sizeof(int) + 1; num_pointer++) {

        int main_num = arr[num_pointer];

        for (int j = 0; j < sizeof(arr)/4 + 1; j++){

            int num_in_arr = arr[j];
            if (num_in_arr == main_num) {
                num_counter ++;
            }

        }

        if (num_counter != main_num) {
            is_array_special = false;
            return is_array_special;
        }
        num_counter = 0;
    }
    return is_array_special;
}

int main() {
    int arr[] = {1,3,3,3,6};
    bool result = midterm_quiz_q2(arr);
    printf("%d", result);
    return 0;
}

