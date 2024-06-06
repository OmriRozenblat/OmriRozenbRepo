#include <stdio.h>
#include <stdbool.h>
#define N 3

int FindNumX (char * seq);
int str_len(char * str);

    int main() {
    int res = find_single(str_arr,7);
    printf("%d", res);
    return 0;
}

int str_len(char * str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
    }

int FindNumX (char * seq){
    int n = str_len(seq);
    int left = 0;
    int right = n-1;
    int middle;
    while (left <= right){
        middle = (right + left) / 2;
        if(seq[middle] == 'Y'){
            right = middle-1;
        } else {
            if(seq[middle+1] == 'Y'){
                return middle;
            }
            left = middle + 1;
        }
    }

    }