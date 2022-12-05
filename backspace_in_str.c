/*
Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"

Your task is to process a string with "#" symbols.

Examples
"abc#d##c"      ==>  "ac"
"abc##d######"  ==>  ""
"#######"       ==>  ""
""              ==>  ""
*/
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include "printArr.h"

// returned string should be allocated by the user and will be freed.
char *strclr(const char *s)
{
    char *ret = (char *)malloc(strlen(s) * sizeof(char) + 1);
    char *r = ret;
    if (ret == NULL)
        return NULL;
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (s[i] == '#' && r > ret)
        {
            r--;
            *r = '\0';
        }
        else if (s[i] != '#')
        {
            *r = s[i];
            r++;
        }
    }
    *r = '\0';
    return ret;
}

int main(int argc, char **argv)
{
    // char *test = "abc#d##c";
    char *test = "abc##d######";
    // char *test = "#######";
    // char *test = "";

    test = strclr(test);

    printString(test);
    free(test);
    return 0;
}