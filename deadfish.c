/*
Write a simple parser that will parse and run Deadfish.

Deadfish has 4 commands, each 1 character long:
    i increments the value (initially 0)
    d decrements the value
    s squares the value
    o outputs the value into the return array

Invalid characters should be ignored.

parse("iiisdoso") == {8, 64}

*/
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>

// return a heap-allocated int array
// its length shall be at least equal to
// the count of 'o' commands in the program
int *parse(const char *program)
{
    int ocount;
    for (size_t i = 0; i < strlen(program); i++)
    {
        if (program[i] == 'o')
            ocount++;
    }

    int *ret = (int *)malloc(ocount * sizeof(int));
    if (ret == NULL)
        return NULL;

    int count = 0;
    int value = 0;
    for (size_t i = 0; i < strlen(program); i++)
    {
        if (program[i] == 'i')
            value++;
        else if (program[i] == 'd')
            value--;
        else if (program[i] == 's')
            value *= value;
        else if (program[i] == 'o')
        {
            ret[count] = value;
            count++;
        }
    }
    return ret;
}

void printArr(int *arr, size_t size)
{
    printf("< ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(">\n");
}

int main(int argc, char **argv)
{
    int *retarr = parse("iiisdoso");
    int size = 2;
    printArr(retarr, size);
    return 0;
}