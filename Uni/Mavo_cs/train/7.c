//#include <stdio.h>
//#include <stdbool.h>
//#define ABC_LEN 26
//#define letter_range 127
//
//
//
//int compress(int a[], int n);
//double evaluate(int a[],int d, double x);
//double calc_power(double x, int power);
//int LongestSequence (int a[], int n, int k);
//
//
//int main(){
//
//    int arr[] = {1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0 };
//    int res = LongestSequence(arr,12,1);
//    printf("%d", res);
//    return 1;
//}
//
//
//int LongestSequence (int a[], int n, int k){
//    int left_pointer = 0;
//    int right_pointer = 0;
//    int first_zero_pointer = 0;
//    int counter = 0;
//    int max_seq = 0;
//
//    while (right_pointer < n){
//        if(counter <= k){
//            if(a[right_pointer] == 0){
//                counter++;
//                if(right_pointer-left_pointer+1 > max_seq && counter == k){
//                    max_seq = right_pointer-left_pointer+1;
//                }
//                if(counter == 1){
//                    first_zero_pointer = right_pointer;
//                }
//            }
//            right_pointer++;
//        }
//        if (counter > k) {
//            counter--;
//            left_pointer = first_zero_pointer + 1;
//
//        }
//
//    }
//    return max_seq;
//
//}
//
//
//double calc_power(double x, int power){
//    double res = x;
//    if(power ==0){
//        return 1;
//    }
//    while (power>1){
//        res*=x;
//        power--;
//    }
//    return res;
//}
//
//
//double evaluate(int a[],int d, double x){
//    double res = 0;
//    for(int i =0; i <= d;i++){
//        res += a[i]* calc_power(x,i);
//    }
//    return res;
//}
//
//
//
//int compress(int a[], int n){
//    int counter = 1;
//    int first_pointer=0;
//    int second_pointer = 1;
//    int len = n;
//    for(int i=1;i<n;i++){
//        if(a[i] == a[i-1]){
//            counter++;
//            if(counter == 2){
//                first_pointer = i-1;
//                second_pointer = i-1;
//            }
//            second_pointer++;
//        } else {
//            if(counter >=3){
//                second_pointer++;
//                int temp = a[first_pointer];
//                a[first_pointer] = -counter;
//                a[first_pointer+1] = temp;
//                int j=first_pointer+2;
//                len -= counter-2;
//                while (second_pointer<n){
//                    a[j] = a[second_pointer];
//                    j++;
//                    second_pointer++;
//                }
//
//            }
//            counter = 1;
//        }
//
//    }
//    return len;
//}