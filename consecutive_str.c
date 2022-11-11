#include <stdlib.h>
#include <stdio.h>

char *longestConsec(const char *const strings[/*arr_len*/], int arr_len, int k)
{
    char *ret = (char *)malloc();

    /* return a heap-allocated string, memory will be freed */
    return calloc(1, 1);
}

int main(int *argc, char **argv)
{
    const size_t n = 6;
    const char *strarr[6] = {"tree", "foling", "trashy", "blue", "abcdef", "uvwxyz"};

    char *lconsec = longestConsec(strarr, (int)n, 2);

    printf("\n{ ");
    for (size_t i = 0; i < n; i++)
    {
        printf("<%s> ", strarr[i]);
    }
    printf("}\n");
    return 0;
}