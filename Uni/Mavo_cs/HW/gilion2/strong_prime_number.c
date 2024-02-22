//#include <stdio.h>
//#include <stdbool.h>
//
//bool is_prime(unsigned int);
//unsigned int calc_digit_sum(unsigned int);
//
//int main() {
//    printf("Please enter a number:\n");
//    unsigned int num;
//    scanf(" %u", &num);
//    do {
//        num = calc_digit_sum(num);
//
//    } while (num > 9);
//    if (is_prime(num)){
//        printf("The number %u is a strong prime number!", num);
//    } else {
//        printf("The number %u is not a strong prime number", num);
//    }
//
//    return 0;
//}
//
//unsigned int calc_digit_sum(unsigned int num){
//    unsigned int digit_sum = 0;
//    //iterate through the num and get the digits sum
//    while( num > 9 ){
//        digit_sum += num % 10;
//        num = num / 10;
//    }
//    //add last num to sum
//    digit_sum += num % 10;
//    return digit_sum;
//
//}
//
//bool is_prime(unsigned int num){
//    //check if prime between 0-9
//    int not_prime[] = {1,4,6,8,9};
//    for (int i = 0; i < 5; i++) {
//        if (num == not_prime[i]){
//            return false;
//        }
//    }
//    return true;
//}