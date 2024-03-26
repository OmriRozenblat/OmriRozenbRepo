#include <stdio.h>
#include <string.h>




int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 1 || num > 9999) {
        printf("Number out of range (1-9999).\n");
        return 1;
    }
    char* result = int2string(num);
    printf("%s\n", result);
    return 0;
}
