#include <stdlib.h>
#include <stdio.h>
//  return a dynamically allocated `long long` array of results

long long *tribonacci(const long long signature[3], size_t n)
{
    long long *ret = (long long *)malloc(n * sizeof(long long));
    if (ret == NULL || n == 0)
        return NULL;

    for (size_t i = 0; i < 3; i++)
    {
        ret[i] = signature[i];
    }
    for (size_t i = 3; i < n; i++)
    {
        ret[i] = ret[i - 1] + ret[i - 2] + ret[i - 3];
    }

    return ret;
}

// testing
int main(int argc, char **argv)
{
    const long long signature[3] = {1, 1, 1};
    const size_t n = 10;
    long long expected[10] = {1, 1, 1, 3, 5, 9, 17, 31, 57, 105};

    // const long long signature[3] = {0, 0, 1};
    // const size_t n = 10;
    // long long expected[10] = {0, 0, 1, 1, 2, 4, 7, 13, 24, 44};

    // const long long signature[3] = {1, 0, 0};
    // const size_t n = 10;
    // long long expected[10] = {1, 0, 0, 1, 1, 2, 4, 7, 13, 24};
    // tester(signature, n, expected);

    long long *test = tribonacci(signature, n);

    printf("\n{");
    for (size_t i = 0; i < n; i++)
    {
        printf("%lld, ", test[i]);
    }
    printf("}\n");

    free(test);

    return 0;
}