//#include <stdio.h>
//#include "stdlib.h"
//#include <stdbool.h>
//#define ABC_LEN 26
//
//bool my_compare_str(char* s1, char* s2);
//char lower(char ch);
//
//
//int main(){
//
//    char* a = "ca t";
//    char* b = "ca     t";
//
//
//    int res = my_compare_str(a,b);
//    printf("res: %d", res);
//    return 1;
//}
//
//char lower(char ch){
//    if(ch>= 'A' && ch <= 'Z'){
//        return 'a' + ch - 'A';
//    }
//    return ch;
//}
//
//bool my_compare_str(char* s1, char* s2){
//    if(*s1 == *s2 && *s1 == '\0'){
//        return true;
//    }
//    if(*s1 == ' ' && *(s1+1) == ' '){
//        return my_compare_str(s1+1,s2);
//    }
//    if(*s2 == ' ' && *(s2+1) == ' '){
//        return my_compare_str(s1,s2+1);
//    }
//
//    if(lower(*s1) != lower(*s2)){
//        return false;
//    }
//    return my_compare_str(s1+1,s2+1);
//}