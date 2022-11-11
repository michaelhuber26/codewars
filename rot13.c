#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char *rot13(const char *src)
{
    size_t len = strlen(src) + 1;
    int new_pos = 0;
    char *ret = (char *)malloc(len * sizeof(char));
    if (ret == NULL)
        exit(0);

    for (size_t i = 0; i < strlen(src); i++)
    {
        // A-Z
        if ((src[i] >= 65 && src[i] <= 90))
        {
            new_pos = src[i] + 13;
            if (new_pos > 90)
                new_pos -= 26;
            ret[i] = new_pos;
        }
        // a-z
        else if ((src[i] >= 97 && src[i] <= 122))
        {
            new_pos = src[i] + 13;
            if (new_pos > 122)
                new_pos -= 26;
            ret[i] = new_pos;
        }

        else
        {
            ret[i] = src[i];
        }
    }
    ret[len - 1] = '\0';
    return ret;
}

int main(int argc, char **argv)
{
    char *x = rot13("Test+54");

    printf("<%s> -> <%s>\n", "Test+54", x);

    return 0;
}