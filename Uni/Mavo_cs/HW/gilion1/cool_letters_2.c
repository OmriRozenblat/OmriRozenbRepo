//#include <stdio.h>
//
//int main() {
//    char user_input;
//    char cool_letter_1;
//    char cool_letter_2;
//    char cool_letter_3;
//
//
//    printf("Please Enter Cool Letters:\n");
//    scanf(" %c %c %c",&cool_letter_1, &cool_letter_2, &cool_letter_3);
//
//    if (cool_letter_1 > 64 && cool_letter_1 < 91) {
//        cool_letter_1 += 32;
//    }
//    if (cool_letter_2 > 64 && cool_letter_2 < 91) {
//        cool_letter_2 += 32;
//    }
//    if (cool_letter_3 > 64 && cool_letter_3 < 91) {
//        cool_letter_3 += 32;
//    }
//
//    int letter1_counter = 0;
//    int letter2_counter = 0;
//    int letter3_counter = 0;
//
//    printf("Please Enter Text:\n");
//    //iterate through the input text
//    while (scanf(" %c", &user_input) != EOF) {
//        if (user_input > 64 && user_input < 91) {
//            user_input += 32;
//        }
//
//        // make sure input is only letters or space
//        if (user_input < 96 && user_input != 32 || user_input > 122) {
//            printf("The score is: -1");
//            return 0;
//        }
//
//        if (user_input == cool_letter_1) {
//            if (letter1_counter > 0) {
//                letter1_counter += 2;
//            } else {
//                letter1_counter += 1;
//            }
//        }
//        else if (user_input == cool_letter_2) {
//            if (letter2_counter > 0) {
//                letter2_counter += 2;
//            } else {
//                letter2_counter += 1;
//            }
//        }
//        else if (user_input == cool_letter_3) {
//            if (letter3_counter > 0) {
//                letter3_counter += 2;
//            } else {
//                letter3_counter += 1;
//            }
//
//        }
//
//    }
//
//    printf("The score is: %d", letter1_counter + letter2_counter + letter3_counter);
//    return 0;
//}
