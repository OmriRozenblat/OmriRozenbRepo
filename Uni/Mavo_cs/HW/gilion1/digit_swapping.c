//#include <stdio.h>
//
//int main() {
//
//    int full_number;
//    int first_position;
//    int second_position;
//    printf("Please enter the number: ");
//    scanf("%d", &full_number);
//    printf("Please enter the positions: ");
//    scanf("%d%d",&first_position, &second_position);
//
//    int number_first_pos;
//    int number_second_pos;
//
//    // if position is one just do modulu
//    if (first_position == 1) {
//        number_first_pos = (full_number % 10);
//    }
//    else {
//        // keep dividing until reaching the position and then modulu
//        int counter = 1;
//        //init a temp number just to find the digit
//        int temp_full_number = full_number;
//        // iterate until found the number in position
//        while(counter < first_position){
//            temp_full_number = temp_full_number / 10;
//            counter++;
//        }
//        number_first_pos = temp_full_number % 10;
//    }
//
//    if (second_position == 1) {
//        number_second_pos = (full_number % 10);
//    }
//    else {
//        int counter = 1;
//        int temp_full_number = full_number;
//        // iterate until found the number in position
//        while (counter < second_position) {
//            temp_full_number = temp_full_number / 10;
//            counter++;
//        }
//        number_second_pos = temp_full_number % 10;
//    }
//    //find the delta between the 2 numbers
//    int delta = number_first_pos-number_second_pos;
//
//    //how much we need to factor the delta
//    int first_pos_delta_factor = 1;
//    for (int i=0; i < second_position-1; i++){
//        first_pos_delta_factor*=10;
//    }
//
//    int second_pos_delta_factor = 1;
//    for (int i=0; i < first_position-1; i++){
//        second_pos_delta_factor *= 10;
//    }
//
//    //add and subtract the delta in the relevant place
//    full_number = full_number + delta * first_pos_delta_factor - delta * second_pos_delta_factor;
//    printf("The new number is %d", full_number);
//
//    return 0;
//}
