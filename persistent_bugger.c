/*
Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number)
*/

#include <stdio.h>

int persistence(int n)
{
    int ret = 0;
    int cur_digit;
    int res = 1;
    int digit_cnt = 0;

    while ((n / 10) != 0)
    {
        while (n != 0)
        {
            digit_cnt++;
            cur_digit = n % 10;
            printf("%d\n", cur_digit);
            res *= cur_digit;
            n /= 10;
        }
        n = res;
        printf("res = %d\n", res);
        res = 1;
        ret++;
    }
    printf("\n");
    return ret;
}

int main(int argc, char **argv)
{
    int test = 4;

    int res = persistence(test);

    printf("persistence = %d\n", res);
    return 0;
}