#include <stdio.h>
#include <stdbool.h>

bool is_prime(int);
unsigned int calc_digit_sum(unsigned int);

int main() {
    printf("Please enter a number:\n");
    unsigned int num;
    int digits_sum = 0;
    scanf(" %u", &num);
    do {
        //the new number after calc
        int temp_num = calc_digit_sum(num);
        digits_sum += calc_digit_sum(temp_num);

    } while (digits_sum > 10);
    if (is_prime(digits_sum)){
        printf("The number %u is a strong prime number!", num);
    } else {
        printf("The number %u is not a strong prime number", num);
    }

    return 0;
}

unsigned int calc_digit_sum(unsigned int num){
    unsigned int digit_sum = 0;
    //iterate through the num and get the digits sum
    while( num > 9 ){
        digit_sum += num % 10;
        num = num / 10;
    }
    //add last num to sum
    digit_sum += num % 10;
    return digit_sum;

}

bool is_prime(int num){
    //check if prime between 0-9
    int not_prime[] = {4,6,8,9};
    for (int i = 0; i < 4; i++) {
        if (num == not_prime[i]){
            return false;
        }
    }
    return true;
}