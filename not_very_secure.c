#include <stdbool.h>
#include <stdio.h>

/*
In this example you have to validate if a user input string is alphanumeric. The given string is not nil/null/NULL/None, so you don't have to check that.

The string has the following conditions to be alphanumeric:

    At least one character ("" is not valid)
    Allowed characters are uppercase / lowercase latin letters and digits from 0 to 9
    No whitespaces / underscore


*/
bool alphanumeric(const char *strin)
{
    if (strin[0] == '\0')
        return false;
    for (int i = 0; strin[i] != '\0'; i++)
    {
        if ((!(strin[i] >= 'A' && strin[i] <= 'Z')) && (!(strin[i] >= 'a' && strin[i] <= 'z')) && (!(strin[i] >= '0' && strin[i] <= '9')))
            return false;
    }
    return true;
}

int main(int argc, char **argv)
{
    printf("%d\n", alphanumeric(""));
    return 0;
}