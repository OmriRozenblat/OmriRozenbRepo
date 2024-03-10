//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
///*******************************Defines****************************************/
//#define ARR_MAX_LENGTH 50
//
///***************************Function declarations******************************/
///**
// * @fn search_shift_arr
// * @brief Return the index of 'target' in the shifted array arr.
// * @param arr - Shifted array of uniq integers.
// * @param n - Length of arr.
// * @param target - Number to find.
// * @return - Index of target, or -1 if target doesnt in the array.
// * @note Shifted array is sorted array in which an unknown number of its last
// * elements have been flipped be first.
// * @note Time complex is O(log(n)).
// */
//int search_shift_arr(int arr[], int n, int target);
//
///*************************Put functions declarations here**********************/
//
//
///******************************************************************************/
//
//
//int main() {
//    int arr[ARR_MAX_LENGTH] = { 0 };
//    int n =                     0;
//    int target =                0;
//
//    printf("Please enter array length:\n");
//    scanf("%d",&n);
//    printf("Please enter target number:\n");
//    scanf("%d",&target);
//    printf("Please enter shifted array:\n");
//    for (int i = 0; i < n; ++i) {
//        scanf("%d",&arr[i]);
//    }
//    printf("%d\n",search_shift_arr(arr,n,target));
//    return 0;
//}
//
//
////int main() {
////    int arr[ARR_MAX_LENGTH] = { 0 };
////    int n =                     0;
////    int target =                0;
////
//////    printf("Please enter array length:\n");
//////    scanf("%d",&n);
//////    printf("Please enter target number:\n");
//////    scanf("%d",&target);
//////    printf("Please enter shifted array:\n");
//////    for (int i = 0; i < n; ++i) {
//////        scanf("%d",&arr[i]);
//////    }
//////    search_shift_arr(arr,n,target);
//////    int array[8] = {12,13,3,7,8,9,10,11};
////    int array[7] = {12,13,14,15,16,17,1};
//////    int array[7] = {11,12,13,4,5,6, 10};
////
////    n = 7;
////    target = 12;
////    printf("%d\n",search_shift_arr(array,n,target));
////    return 0;
////}
//
///*************************Functions implementations****************************/
//int search_shift_arr(int arr[], int n, int target){
//    int right_pointer = n-1, left_pointer = 0;
//
//    while (right_pointer >= left_pointer){
//        int middle = (right_pointer+left_pointer) / 2;
//        if(arr[middle] == target){
//            return middle;
//        }
//
//        //check which part to search in
//        if(arr[middle] < target){
//            //must be in right part
//            if(arr[right_pointer] >= target){
//                left_pointer = middle+1;
//
//            } else{
//                right_pointer = middle-1;
//            }
//        }
//        if(arr[middle] > target){
//            //must be in left part
//            if(arr[left_pointer] <= target){
//                right_pointer = middle-1;
//
//            } else{
//                left_pointer = middle+1;
//            }
//
//        }
//    }
//    //didnt find it - return -1
//    return -1;
//    }
//
//
