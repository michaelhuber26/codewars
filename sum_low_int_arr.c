#include <stddef.h>
#include <stdio.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n])
{

    //  <----  hajime!

    long small1;
    long small2;
    small1 = 2147483647;
    small2 = 2147483647;
    size_t pos_small1 = 0;
    size_t pos_small2 = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (numbers[i] < numbers[pos_small1])
            pos_small1 = i;
    }

    for (size_t i = 0; i < n; i++)
    {
        if (numbers[i] <= numbers[pos_small2] && numbers[i] >= numbers[pos_small1] && pos_small1 != i)
            pos_small2 = i;
    }

    printf("small1: %d\n", numbers[pos_small1]);
    printf("small2: %d\n", numbers[pos_small2]);

    return numbers[pos_small1] + numbers[pos_small2];
}

int main(int argc, char **argv)
{
    printf("TESTING! :\n");
    int len = 5;
    const int numbers[] = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000};

    long sum = sum_two_smallest_numbers(len, numbers);

    printf("%d\n", sum);
    return 0;
}