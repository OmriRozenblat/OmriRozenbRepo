#include <stdio.h>
#include <stdbool.h>

int find_single(char *str_arr[], int n);
bool cmp_str(char* str1,char* str2);



int main() {
    char *str_arr[] = { "world", "world", "hello", "hello", "tnx","tnx","hello"};
    int res = find_single(str_arr,7);
    printf("%d", res);
    return 0;
}

bool cmp_str(char* str1,char* str2){
    while (*str1 != '\0' || *str2 != '\0'){
        if(*str1 != *str2) {
            return false;
        }
        str1++;
        str2++;
    }
    return true;
}

int find_single(char *str_arr[], int n){
    int left = 0;
    int right = n-1;
    int middle;
    while(left <= right){
        middle = (left + right) / 2;
        if(middle == 0){
            return middle;
        }
        if(cmp_str(str_arr[middle], str_arr[middle-1])){
            left = middle+1;
        } else{
            right = middle - 1;
        }
    }
    return middle;

}