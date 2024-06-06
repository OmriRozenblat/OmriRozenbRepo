#include <stdio.h>
#include <stdbool.h>
#define ABC_LEN 26
#define letter_range 127

int longest_seq(char* str);
bool cmp_hist(int hist1[], int hist2[]);
int longest_seq(char* str);
void q2(int arr[], int n);
void swap(int* num1,int* num2);

int main(){

    int arr[] = {1,4,7,6,8,9};
    int n =6;
    q2(arr,n);

    for(int i =0; i<n;i++){
        printf("%d, ", arr[i]);
    };

    return 1;
}

void swap(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void q2(int arr[], int n){
   for (int i =0;i<n;i+=2){
       if(arr[i] <= arr[i+1]){
           continue;
       } else {
           swap(arr+i,arr+i+1);
       }
   }
   for(int i =1; i<n;i+=2){
       if(arr[i] < arr[i+1]){
           swap(arr+i,arr+i+1);
       } else {
           continue;
       }
   }
}














bool cmp_hist(int hist1[], int hist2[]){
    for(int i =0; i< ABC_LEN;i++){
        if(hist1[i] > 0 && hist2[i] > 0 ||
        hist1[i] == 0 && hist2[i] == 0){
            continue;
        }
        return false;
    }
    return true;
}

int longest_seq(char* str){
    int i = 0;
    int full_hist[ABC_LEN] = {0};
    int sub_hist[ABC_LEN] = {0};
    while (str[i] != '\0'){
        full_hist[str[i] - 'a'] = 1;
        i++;
    }
    int right_pointer = 0;
    int left_pointer = 0;
    int min_len = i;
    while (right_pointer < i){

        sub_hist[str[right_pointer] - 'a']++;
        right_pointer++;
        if(cmp_hist(full_hist, sub_hist)){
            if(right_pointer - left_pointer +1 < min_len){
                min_len = right_pointer - left_pointer +1;
            }
            while (cmp_hist(full_hist, sub_hist)){
                sub_hist[str[left_pointer] - 'a']--;
                left_pointer++;
            }

        }
    }
    return right_pointer - left_pointer + 1;

}