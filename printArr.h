#pragma once

#include <string.h>
#include <stdio.h>

void printIntArr(int *arr, size_t size)
{
    printf("< ");
    for (size_t i = 0; i < size; i++)
    {
        printf("|%d| ", arr[i]);
    }
    printf(">\n");
}

void printString(char *str)
{
    printf("<");
    for (size_t i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }
    printf(">\n");
}