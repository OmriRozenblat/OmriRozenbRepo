//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//
//int count_appearances(char letter, char* str);
//bool isPermutation(char str1[], char str2[]);
//bool test_premutation(char str1[], int str1_index, char str2[]);
//bool is_len_equal(char str1[], char str2[]);
//int main() {
//    char str1[100], str2[100];
//
//
//    scanf("%s", str1);
//
//    scanf("%s", str2);
//
//    if (isPermutation(str1, str2))
//        printf("Yes, '%s' is a permutation of '%s'.\n", str1, str2);
//    else
//        printf("No, '%s' is not a permutation of '%s'.\n", str1, str2);
//
//    return 0;
//}
//
//
//
//
//
//bool isPermutation(char str1[], char str2[]) {
//    //wrapper function for the actual recursion code
//    //if words length is not equal return false
//    if(is_len_equal(str1, str2)){
//        return test_premutation(str1,0, str2);
//    }
//    return false;
//}
//
//
//bool test_premutation(char str1[], int str1_index, char str2[]){
//    //recursion ending condition, if letter index reached word length
//    if(str1_index == strlen(str1) ){
//        return true;
//    }
//
//    //counting appearances of each letter in the string and comparing to the other string
//    //str1_index is the index of the letter we are checking in the string
//    if (count_appearances(str1[str1_index], str1) ==
//        count_appearances(str1[str1_index], str2)){
//        return test_premutation(str1,str1_index+1, str2);
//    }
//    return false;
//}
//
//int count_appearances(char letter, char* str){
//    //count appearances of a word in a string
//    int letter_counter = 0;
//    for(int i = 0; i < strlen(str); i++){
//        if (str[i] == 0){
//            return letter_counter;
//        }
//        if (str[i] == letter){
//            letter_counter++;
//        }
//    }
//    return letter_counter;
//}
//
//
//bool is_len_equal(char str1[], char str2[]){
//    //is string length equal
//    if(strlen(str1) == strlen(str2)){
//        return true;
//    }
//    return false;
//}