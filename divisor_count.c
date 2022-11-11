#include <stdio.h>

int divisors(int n)
{
    int cnt = 0;
    printf("TEST\n");

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
        }

    return cnt;
}

int main(int argc, char **argv)
{
    int x = divisors(4);
    printf("%d\n", x);
    printf("%d\n", divisors(5));
    printf("%d\n", divisors(30));

    return 0;
}