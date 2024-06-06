#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_legal(char* str, int index);
int CountParenthesesPairs (int n);
int CountParenthesesPairs_aux (char* str, int str_len, int index, int counter);

int main() {
    CountParenthesesPairs (3);
    return 0;
}
bool is_legal(char* str, int index) {

    for(int i=0; i <= index; i++){
        int left_counter = 0;
        int right_counter = 0;
        for (int j = 0; j < i + 1; j++) {

            if (str[j] == '(') {
                left_counter++;
            }
            if (str[j] == ')') {
                right_counter++;
            }

        }
        if (right_counter > left_counter ) {
            return false;
        }
    }

    return true;

}


int CountParenthesesPairs_aux (char* str, int str_len, int index, int counter){
    if(index == str_len-1) {
        return 1;
    }
    for(int i =0;i<2;i++){
        if(i==0){
            str[index] = ')';
            if (!is_legal(str, index)){
                continue;
            }
            counter += CountParenthesesPairs_aux(str, str_len,index+1, counter);

        } else{
            str[index] = '(';
            counter += CountParenthesesPairs_aux(str, str_len,index+1, counter);
        }
    }

    return counter;



}
int CountParenthesesPairs (int n){
    char str[n*2];
    int counter =CountParenthesesPairs_aux(str, n*2, 0, 0);
    printf("%d", counter);

}





