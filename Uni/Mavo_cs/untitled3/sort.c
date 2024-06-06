#include <stdio.h>
#include <stdbool.h>
#define ABC_LEN 26

int str_len(char* str);
int find_mistake(int dist[], int n);
bool is_strong(char* str, int len);
int num_unbeatable(char* s);
int main() {
    char *str  = "ABC123";

    int res = num_unbeatable(str);
    printf("%d", res);
    return 0;
}

int str_len(char* str){
    int i =0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

int num_unbeatable(char* s){
    int s_len = str_len(s);
    int len = s_len;
    int counter = 0;
    int i = 0;
    while (*(s+i) != '\0'){
        while (len >0){
            counter += is_strong(s+i,len);
            len--;
        }
        i++;
        len = s_len-i;
    }
    return counter;
}


bool is_strong(char* str, int len){
    int i =0;
    int big_letter_counter = 0;
    int digit_counter = 0;
    int small_letter_counter = 0;
    while (i<len){
        char letter = str[i];
        if(letter >= 'a' && letter <= 'z' ){
            small_letter_counter++;
        }
        if(letter >= '0' && letter <= '9'){
            digit_counter++;
        }
        if(letter >= 'A' && letter <= 'Z'){
            big_letter_counter++;
        }
        i++;
    }
    if(big_letter_counter == 1 &&
    small_letter_counter == 4 &&
    digit_counter == 1){
        return true;
    } else if(big_letter_counter<=3 && digit_counter == 3){
        return true;
    }
    return false;


}




int find_mistake(int dist[], int n){
    int right = n-1;
    int left = 0;
    int middle;
    while (right >= left){
        middle = (left + right) / 2;
        if(middle == n){
            return -1;
        }
        if(dist[middle] < dist[middle+1]){
            return middle+1;
        }

        if(dist[middle] > dist[left]){
            right = middle-1;
        } else {
            left = middle+1;
        }
    }
    return -1;
}