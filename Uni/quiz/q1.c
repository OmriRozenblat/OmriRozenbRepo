#include <stdio.h>
#include <stdbool.h>


int midterm_q1(int num);

int main(){
    int num = 12;

    midterm_q1(0);
    return 0;
}
int midterm_q1(int num){
    int temp_num = num;
    int sum;
    do{
        sum = 0;

        while(temp_num>0){
            //add last digit to num
            sum += temp_num%10;
            //cut last digit from num
            temp_num = temp_num / 10;
        }
        temp_num = sum;
        //run while sum > 9
    } while (sum>9);


    printf("%d", sum);
    return sum;
}