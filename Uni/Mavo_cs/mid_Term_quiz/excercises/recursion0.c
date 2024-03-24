#include <stdio.h>


int sum(int n);
int my_pow(int base, int exp);
void list_down(int n);
unsigned int ladder(unsigned int n);

int main() {
//    sum(6);
//    my_pow(2,100);
    ladder(3);
    return 0;
}

int sum(int n){
    if (n==1){
        printf("reached n = 1 - lets go backkkk \n");

        return 1;
    }
    int full_sum = n;
    full_sum += sum(n-1);
    printf("sum: %d\n", full_sum);
    return full_sum;

}

int my_pow(int base, int exp){
    if(exp == 0){
        return 1;
    }
    exp -= 1;
    int res = base * my_pow(base, exp);
    printf("res: %d\n", res);

    return res;
}

void list_down(int n){
    if(n == 0){
        return;
    }
    list_down(n-1);
    printf("%d", n);

    return;
}

unsigned int ladder(unsigned int n){
    if(n==1){
        return 0;
    }
    unsigned int options = 0;
    options = (options * ladder(n-1)) + 1;
    printf("%d\n", options);

    return options;
}