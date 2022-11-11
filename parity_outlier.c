#include <stdlib.h>
#include <stdio.h>

int is_even_array(const int *values, size_t count);
int is_odd_array(const int *values, size_t count);

int find_outlier(const int *values, size_t count)
{
    if (is_even_array(values, count) == 1)
    {
        for (size_t i = 0; i < count; i++)
        {
            if (values[i] % 2 == 1 || values[i] % 2 == -1)
            {
                printf("is even return = %d\n", values[i]);
                return values[i];
            }
        }
    }
    if (is_odd_array(values, count) == 1)
    {
        for (size_t i = 0; i < count; i++)
        {
            if (values[i] % 2 == 0)
            {
                printf("is odd return = %d\n", values[i]);
                return values[i];
            }
        }
    }
    return -1;
}

int is_even_array(const int *values, size_t count)
{
    int cnt_even = 0;
    for (size_t i = 0; i < count; i++)
    {
        if (values[i] % 2 == 0)
        {
            cnt_even++;
            if (cnt_even > 1)
            {
                printf("array is even return = %d\n", 1);
                return 1;
            }
        }
    }
    printf("array is not even return = %d\n", 0);
    return 0;
}

int is_odd_array(const int *values, size_t count)
{
    int cnt_odd = 0;
    for (size_t i = 0; i < count; i++)
    {
        if (values[i] % 2 == 1)
        {
            cnt_odd++;
            if (cnt_odd > 1)
            {
                printf("array is odd return = %d\n", 1);
                return 1;
            }
        }
    }
    printf("array is not odd return = %d\n", 0);

    return 0;
}

int main(int argc, char **argv)
{
    // int values[] = {2, 6, 8, 10, 3}; // odd at the back
    int values[] = {2, -6, 8, -10, -3}; // odd at the back, negative
    size_t count = sizeof(values) / sizeof(values[0]);
    int x = find_outlier(values, count);

    printf("outlier = %d\n", x);

    return 0;
}