#include <stdio.h>

int main() {

    int num;
    int first_position;
    int second_position;
    printf("Please enter the number:\n");
    scanf("%d", &num);
    printf("Please enter the positions:\n");
    scanf("%d%d",&first_position, &second_position);

    int number_first_pos;
    int number_second_pos;

    // if position is one just do modulo
    if (first_position == 1) {
        number_first_pos = (num % 10);
    } else {
        // keep dividing until reaching the position and then modulo
        int counter = 1;
        //init a temp number just to find the digit
        int temp_full_number = num;
        // iterate until found the number in position
        while(counter < first_position){
            temp_full_number = temp_full_number / 10;
            counter++;
        }
        number_first_pos = temp_full_number % 10;
    }

    if (second_position == 1) {
        number_second_pos = (num % 10);
    } else {
        int counter = 1;
        int temp_full_number = num;
        // iterate until found the number in position
        while (counter < second_position) {
            temp_full_number = temp_full_number / 10;
            counter++;
        }
        number_second_pos = temp_full_number % 10;
    }
    //find the delta between the 2 numbers
    int delta = number_first_pos-number_second_pos;

    //how much we need to factor the delta
    int first_pos_delta_factor = 1;
    for (int i=0; i < second_position-1; i++){
        first_pos_delta_factor*=10;
    }

    int second_pos_delta_factor = 1;
    for (int i=0; i < first_position-1; i++){
        second_pos_delta_factor *= 10;
    }

    //add and subtract the delta in the relevant place
    num += delta * first_pos_delta_factor - delta * second_pos_delta_factor;
    printf("The new number is: %d", num);

    return 0;
}
