#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define BUFFER_SIZE 256
//==============================================================================

int find_power_of_2(int num);

int print_power_numbers_and_calc_sum(int* array, int array_size);


int main() {
    int input_size;
    int sum;

    printf("Enter size of input:\n");
    scanf("%d", &input_size);
	if(input_size <= 0){
        printf("Invalid size\n");
        return 0;
    }
    printf("Enter numbers:\n");
    int* num_arr = malloc(sizeof(int) * input_size);
    for(int i = 0; i < input_size; i++){
        if(scanf("%d", num_arr + i) == -1){
            printf("Invalid number\n");
            free(num_arr);
            return 0;
        }
    }
    sum = print_power_numbers_and_calc_sum(num_arr, input_size);
    printf("Total exponent sum is %d\n", sum);
    free(num_arr);

	return 0;
}



int find_power_of_2(int num){
    /**
     * this function returns the power of 2 if exist and -1 otherwise
     */

    int counter = 0;
    while(num % 2 == 0 && num > 0){
        num = num / 2;
        counter++;
    }
    if(num == 1){
        return counter;
    }
    return -1;
}

int print_power_numbers_and_calc_sum(int* array, int array_size){
    /**
     * This function prints all power numbers and calculates sum of exponents
     */


    int sum = 0;
    for(int i = 0; i < array_size;i++){
        int res = find_power_of_2(array[i]);
        if(res != -1){
            sum += res;
            printf("The number %d is a power of 2: %d = 2^%d\n" ,array[i], array[i], res);
        }
    }
    return sum;
}