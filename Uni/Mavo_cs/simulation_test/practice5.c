#include "stdbool.h"
#include "stdio.h"


int CountParentheses(int n, int open_surplus);
int CountParenthesesPairs(int n);


int main() {
    CountParenthesesPairs(3);
    return 0;
}

int CountParenthesesPairs(int n)
{
    int res = CountParentheses(n, 0);
    printf("%d", res)   ;

}



int CountParentheses(int n, int open_surplus)
{
    if (n == 0 && open_surplus == 0)
        return 1;
    int possible = 0;
    if (open_surplus)
        possible += CountParentheses(n, open_surplus - 1);
    if (n)
    possible += CountParentheses(n - 1, open_surplus + 1);
    return possible;
}
