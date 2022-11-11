#include <stdlib.h>
#include <stdio.h>

int is_even_array(const int *values, size_t count);
int is_odd_array(const int *values, size_t count);

int find_outlier(const int *values, size_t count)
{
    if (is_even_array(values, count))
    {
        for (size_t i = 0; i < count; i++)
        {
            if (values[i] % 2 == 1)
            {
                return (int)count;
            }
        }
    }

    else if (is_odd_array(values, count))
    {
        for (size_t i = 0; i < count; i++)
        {
            if (values[i] % 2 == 0)
            {
                return (int)count;
            }
        }
    }
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
                return 1;
            }
        }
        return 0;
    }
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
                return 1;
            }
        }
        return 0;
    }
}
