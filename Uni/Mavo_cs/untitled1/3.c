//#include <stdio.h>
//
//int travel_in_hanoi(int n);
//int hanoi(int n, int from, int to);
//int abs(int num);
//
//
//int main() {
//    int res = travel_in_hanoi(3);
//    printf("%d", res);
//    return 0;
//}
//int abs(int num){
//    if(num<0){
//        return -1*num;
//    }
//    return num;
//}
//
//int hanoi(int n, int from, int to){
//    int via = 6-from-to;
//
//    if(n == 0){
//        return 0;
//    }
//    int res = hanoi(n-1, from, via);
//    return res+ abs(to-from) + hanoi(n-1, via, to);
//
//
//}
//
//int travel_in_hanoi(int n){
//    return hanoi(n, 1,3);
//}