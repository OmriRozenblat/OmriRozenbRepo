//#include <stdio.h>
//
//int main() {
//
//    int num;
//    int k;
//    int num_counter = 0;
//    int sum_to_avg_5;
//    int sum_to_avg_3;
//    int num_1;
//    int num_2;
//    int num_3;
//    int num_4;
//    int num_5;
//    printf("Please Enter Input Signal:\n");
//    printf("The Clean Signal Is: ");
//
//    while (scanf("%d", &num) != EOF) {
//        //print space and comma after each number
//        if (num_counter > 0) {
//            printf(", ");
//        }
//        num_5 = num_4;
//        num_4 = num_3;
//        num_3 = num_2;
//        num_2 = num_1;
//        num_1 = num;
//        sum_to_avg_5 = num_1 + num_2 + num_3 + num_4 + num_5;
//        sum_to_avg_3 = num_1 + num_2 + num_3;
//
//        //decide value of k
//        if (num % 5 == 0){
//            k = 5;
//        } else {
//            k = 3;
//        }
//
//        //print original value if not able to avg
//        if (num_counter < 2) {
//            printf("%.2f", (float)num);
//
//        } else {
//            if (num % 5 == 0){
//                if (num_counter > 3) {
//                    printf("%.2f", (float)sum_to_avg_5 / k);
//                } else {
//                    printf("%.2f", (float)num);
//                }
//
//            } else {
//                printf("%.2f", (float)sum_to_avg_3 / k);
//            }
//        }
//        num_counter++;
//
//    }
//    return 0;
//}
