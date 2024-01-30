#include <stdio.h>

int main() {
    char cool_letter;
    printf("Please Enter Cool Letter:\n");
    scanf(" %c",&cool_letter);

    if (cool_letter > 64 && cool_letter < 91) {
        cool_letter += 32;
    }

    printf("Please Enter Text:\n");
    int letter_counter = 0;
    char user_input;
    while (scanf(" %c", &user_input) != EOF) {

        // convert capital letters to small ones
        if (user_input > 64 && user_input < 91) {
            user_input += 32;
        }

        // make sure input is only letters or space
        if (user_input < 96 && user_input != 32 || user_input > 122) {
            printf("The score is: -1");
            return 0;
        }

        // count the special letter
        else if (user_input == cool_letter) {
        letter_counter += 1;
        }
    }

    printf("The score is: %d", letter_counter);
    return 0;
}
