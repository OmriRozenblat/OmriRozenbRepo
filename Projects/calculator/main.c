#include <stdio.h>

int main() {
    char operator;
    float num_1;
    float num_2;
    float result;
    printf("enter digits and operator:\n");
    while (scanf("%f %c %f", &num_1, &operator, &num_2) != EOF) {

    switch (operator){

        case '+':
            result = num_1 + num_2;
            break;

        case '-':
            result = num_1 - num_2;
            break;

        case '/':
            result = num_1 / num_2;
            break;

        case '*':
            result = num_1 * num_2;
            break;

        default:
            printf("action is not recognizable, please try again");
            return -1;

        }

        printf("%.2f", result);
    }

    return  0;

}
