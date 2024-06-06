#include "stdio.h"

int handle_text(char *st);

int handle_text(char *st){
    int i=0;
    while (*st != '\0'){
        if(*st == ' ' && *st+1 == ' '){
            *st == *st+1;

        }

    }
}


int partition(int* a, int n){
    int p = a[0]; int t = n-1; int b = 0;
    while(t>=b){
        while (t>=b && a[t]>p){
            t--;
        }
        while (b<=t && a[b]<p){
            b++;
        }
        if (b<t){
            
        }
    }
}