
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// unfinished

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text)
{
    int num;
    int size = 300;
    char *ret_string = (char *)malloc(size * sizeof(char) + 1);

    if (ret_string == NULL)
    {
        printf("Cannot allocate %zu bytes for string\n", size * sizeof(char) + 1);
        exit(0);
    }

    int len = strlen(text);
    char tmp[] = "   ";
    printf("len: %d\n", len);

    for (int i = 0; i < len; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            num = text[i] - 64;
            sprintf(tmp, "%d", num);
            strcat(ret_string, tmp);
            strcat(ret_string, " ");
        }
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            num = text[i] - 96;
            sprintf(tmp, "%d", num);
            strcat(ret_string, tmp);
            strcat(ret_string, " ");
        }
    }
    ret_string[strlen(ret_string) - 1] = '\0';

    printf("ret_string: %s\n", ret_string);
    return ret_string;
}

int main(int argc, char **argv)
{
    printf("TESTING! :\n");

    char *test = alphabet_position("The sunset sets at twelve o' clock.");

    printf("<%s>\n", test);

    free(test);
    return 0;
}