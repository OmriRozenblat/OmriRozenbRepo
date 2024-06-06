#include <stdio.h>
#include <stdbool.h>
#define ABC_LEN 26
#define letter_range 127


int index_of_equal_sum_left_right(int a[], int n);
bool rearrangeStringToPalindrome(char* str);


int main(){

    char* str = "adrar";
    int res = rearrangeStringToPalindrome(str);
    printf("%d", res);
    printf("%s", str);
    return 1;
}


bool rearrangeStringToPalindrome(char* str){
    int hist[ABC_LEN] = {0};
    int i =0;
    int len = 0;
    while (str[i] != '\0'){
        hist[str[i] - 'a']++;
        i++;
    }
    int even_counter = 0;
    int uneven_counter = 0;
    for(int j =0;j<ABC_LEN;j++){
        if(hist[j] % 2 ==0){
            even_counter++;
        } else {
            uneven_counter++;
        }
    }
    if(uneven_counter<2){
        char* new = str;
        int left_pointer = 0;
        int right_pointer = len-1;
        for(int l =0; l<ABC_LEN;l++){

            if(hist[l] %2 != 0){
                new[len/2] = l + 'a';
                hist[l]--;
            }

            if(hist[l] %2 == 0){
                while (hist[l] != 0){
                    new[left_pointer] = (char)(l + 'a');
                    new[right_pointer] = (char)(l + 'a');
                    left_pointer++;
                    right_pointer++;
                    hist[l] -= 2;
                }
            }

        }
        return true;
    }
    return false;

}


int index_of_equal_sum_left_right(int a[], int n){
    int sum_left = 0;
    int sum_right = 0;

    for (int i =0; i < n; i++){
        sum_right+= a[i];
    }

    int index = 0;
    for(; index<n;index++){
        if(sum_left  == sum_right-a[index]){
            return index;
        }
        sum_left+=a[index];
        sum_right -= a[index];
    }
    return -1;

}

