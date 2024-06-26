#include <stdio.h>
#include <string.h>


char* int2string(int num);

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

const char* one2twenty[] = {
        "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
        "Seventeen", "Eighteen", "Nineteen"
};
const char* tens[] = {
        "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty",
        "Ninety"
};
char* int2string(int num) {
    // Assuming the result will fit within 100 characters
    static char result[100];
    memset(result, 0, sizeof(result)); // Initialize the result string
    if (num == 0) {
        return "";
    }
    if (num < 20) {
        sprintf(result, "%s ", one2twenty[num - 1]);
        return result;
    }
    if (num < 100) {
        sprintf(result, "%s %s", tens[num / 10 - 2], int2string(num % 10));
        return result;
    }
    if (num < 1000) {
        sprintf(result, "%s Hundred %s", one2twenty[num / 100 - 1],
                int2string(num % 100));
        return result;
    }
    sprintf(result, "%s Thousand %s", one2twenty[num / 1000 - 1],
            int2string(num % 1000));
    return result;
}