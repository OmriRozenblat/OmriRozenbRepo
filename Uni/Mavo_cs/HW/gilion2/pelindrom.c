#include <stdio.h>
#include <stdbool.h>

bool is_pellindrom(int);
int calc_num_length(int num);

int main() {
    printf("Please enter a number:\n");

//    scanf(" %u", &num);
//    printf("%u", num);
    int num = 456;
    bool is = is_pellindrom(num);


    return 0;
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

bool is_pellindrom(int num) {

    int num_len = calc_num_length(num);
    int pelindrom_nums_array[num_len];
    int temp_num = num;
    for (int i = 0; i<num_len;i++){

        pelindrom_nums_array[i] = temp_num % 10;
        temp_num = temp_num / 10;
    }
    return true;

    }
