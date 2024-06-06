#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int es_q4(char* s1, char* s2);
char* readStr();

int main() {
//    char *s1 = readStr();
//    if (!s1) {
//        return 1;
//    }
//    char *s2 = readStr();
//    if (!s2) {
//        free(s1);
//        return 1;
//    }
    char* s1 = "aba aad";
    char* s2 = "aba aa  d";
    printf("%d", es_q4(s1, s2));
//    free(s1);
//    free(s2);
    return 0;
}

char* readStr() {
    int n;
    if (scanf("%d", &n) != 1) {
        return NULL;
    }
    char* s = malloc(n + 1);
    if (!s) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%c", s+i) != 1) {
            free(s);
            return NULL;
        }
        if (s[i] == '\n') {
            i--;
        }
    }
    s[n] = '\0';
    return s;
}

int es_q4(char* s1, char* s2) {
    if(*s1 == *s2 && *s1 == '\0'){
        return 1;
    }
    if (*s1 != *s2 && *s1 !=' ' && *s2 != ' '){
        return 0;
    }
    if(*s1 == *s2){
        return es_q4(s1+1, s2+1);
    }
    if( *s1 != *s2 && (*s1 == ' ')){
        return es_q4(s1+1, s2);
    }
    if(*s1 != *s2 && (*s2 == ' ')){
        return es_q4(s1, s2+1);
    }

}