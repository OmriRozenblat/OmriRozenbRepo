//#include <stdio.h>
//
//
//
//int* solution(int arr[], int arr_size) {
//    int last_item = arr[arr_size - 1];
//    for (int item_counter = arr_size - 2; item_counter >= 0; item_counter--) {
//        int last = arr[item_counter + 1];
//        int before = arr[item_counter];
//
//        arr[item_counter + 1] = arr[item_counter];
//
//
//    }
//    arr[0] = last_item;
//
//    return arr;
//}
//
//int main() {
//    int arr_1[] = {14,45,2,40};
//    int size = sizeof(arr_1) / sizeof(int);
//    int *res = solution(arr_1, size);
//    for (int i = 0; i < size; i++){
//
//        printf("%d\n", res[i]);
//    }
//
//    return 0;
//}
//
//
//
//
//
//
