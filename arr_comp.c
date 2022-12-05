#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
/*
 *sorts array
 *@param int* arr: array to sort
 *@param char size: size of array
 *
 *@returns: sorted array
 */
int sort(int *arr, char size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
        // Last i elements are already in place
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void print_arr(const int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int *cpy_arr(int *dest, const int *src)
{
    size_t n = sizeof(src) / sizeof(src[0]);

    for (size_t i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    // return dest;
}

bool comp(const int *a, const int *b, size_t n)
{
    int a1[n];
    int b1[n];
    cpy_arr(a1, a);
    cpy_arr(b1, b);

    print_arr(a1, n);
    print_arr(b1, n);
    sort(a1, n);
    sort(b1, n);
    print_arr(a1, n);
    print_arr(b1, n);

    return false;
}

int main(int argc, char **argv)
{
    printf("TESTING! :\n");

    const int numbers1[] = {121, 144, 19, 161, 19, 144, 19, 11};
    const int numbers2[] = {121, 14641, 20736, 36100, 25921, 361, 20736, 361};

    int len = sizeof(numbers1) / sizeof(numbers1[0]);

    bool is_same = comp(numbers1, numbers2, len);

    printf("COMPARE: %d\n", is_same);
    return 0;
}