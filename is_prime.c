#include <stdbool.h>
#include <stdio.h>

bool is_prime(int num)
{
    int i = 2;
    if (num < 2)
        return false;

    while (i * i <= num)
    {
        // check if i divides x
        if (num % i == 0)
        {
            // num has a factor in between 2 and sqrt(num)
            // -> not a prime number
            return false;
        }
        i += 1;
    }
    // no factor in the above loop,
    // -> num is a prime number
    return true;
}

int main(int argc, char **argv)
{

    printf("%s\n", is_prime(1) ? "true" : "false");
    printf("%s\n", is_prime(2) ? "true" : "false");
    printf("%s\n", is_prime(-1) ? "true" : "false");

    return 0;
}