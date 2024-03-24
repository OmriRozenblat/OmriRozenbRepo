#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*******************************Defines****************************************/
#define ARR_MAX_LENGTH 50


/***************************Function declarations******************************/
/**
 * @fn k_closest_to_target
 * @brief Return the value of the k closest number to target in 'arr'.
 * @param arr - Sorted array of uniq integers.
 * @param n - Length of arr.
 * @param target - Integer number.
 * @param k - A non-negative number.
 * @return - value of kth closest to target.
 * @note If 2 different numbers are at the same distance from target we'll
 * treat the smaller one to be closer to target.
 * @note We assume k <= n.
 * @note Time complex is O(log(n) + k).
 */

/*************************Put functions declarations here**********************/
int k_closest_to_target(int arr[], int n, int target, int k);
int binary_search(int arr[], int n, int target);
int abs(int num);
int closest_idx(int arr[], int n, int target, int* right_idx, int* left_idx);
int modify_pointers(int arr[], int* right_idx, int* left_idx,
                    int candidate_from_left_dist,
                    int candidate_from_right_dist);
/******************************************************************************/

int main() {
    int arr[ARR_MAX_LENGTH] = { 0 };
    int n =                     0;
    int target =                0;
    int k =                     0;

    printf("Please enter array length:\n");
    scanf("%d",&n);
    printf("Please enter target number:\n");
    scanf("%d",&target);

    printf("Please enter k:\n");
    scanf("%d",&k);

    printf("Please enter sorted and uniq array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);

    }

    printf("%d\n",k_closest_to_target(arr,n,target,k));
    return 0;
}


/*************************Functions implementations****************************/
int k_closest_to_target(int arr[], int n, int target, int k){
    int target_index = binary_search(arr, n, target);
    int counter = 1;
    int closest, right_candidate_idx = target_index+1,
    left_candidate_idx = target_index-1;
    int * right_candidate_idx_ptr = &right_candidate_idx;
    int * left_candidate_idx_ptr = &left_candidate_idx;

    if (k == 1){
        return target;
    }
    while (counter < k){
        closest = closest_idx(arr, n, target,
                              right_candidate_idx_ptr, left_candidate_idx_ptr);
        counter++;
    }
    return closest;
}


int closest_idx(int arr[], int n, int target, int* right_idx, int* left_idx){
    /*
     * returns the closest item in th arr to the target
     */

    int closest_idx;
    int candidate_from_left_dist = abs(target - arr[*left_idx]);
    int candidate_from_right_dist = abs(target - arr[*right_idx]);
    //make sure to not access memory not allocated
    if (*left_idx < 0){
        *right_idx = *right_idx+1;
        return arr[*right_idx-1];
    }
    if (*right_idx > n-1){
        *left_idx = *left_idx-1;
        return arr[*left_idx+1];
    }
    //this function will check for the closest item
    // and move the pointers accordingly
    closest_idx = modify_pointers(arr, right_idx, left_idx,
                                  candidate_from_left_dist,
                                  candidate_from_right_dist);
    return arr[closest_idx];
}

int modify_pointers(int arr[], int* right_idx, int* left_idx,
                    int candidate_from_left_dist,
                    int candidate_from_right_dist){

    int closest_idx;
    if (candidate_from_left_dist == candidate_from_right_dist) {
        if (arr[*right_idx] < arr[*left_idx]) {
            *right_idx = *right_idx + 1;
            return *right_idx - 1;

        } else {
            *left_idx = *left_idx - 1;
            return *left_idx + 1;
        }
    }
    if(candidate_from_right_dist > candidate_from_left_dist){
        closest_idx = *left_idx;
        *left_idx = *left_idx-1;
    } else{
        closest_idx = *right_idx;
        *right_idx = *right_idx+1;
    }
    return closest_idx;
}
int abs(int num){
    if(num < 0){
        num = num*-1;
    }
    return num;

}
int binary_search(int arr[], int n, int target) {
    int left_pointer = 0, right_pointer = n-1;
    int closest_idx = 0;;
    // some initial value to be over-run when loop starting
    int min_dist = abs(target - arr[0]);
    while(right_pointer >= left_pointer){
        int middle = (left_pointer+right_pointer) / 2;

        //distance between the item to the target
        int dist = abs(arr[middle] - target);
        //update if lower or take min if equal
        if (dist < min_dist || (dist == min_dist && arr[middle] < target)){
            min_dist = dist;
            closest_idx = middle;
        }
        if(arr[middle] == target) {
            return middle;
        }
        if (arr[middle] > target){
            right_pointer = middle-1;
        }
        if (arr[middle] < target){
            left_pointer = middle+1;
        }
    }
    //if not found
    return closest_idx;
}