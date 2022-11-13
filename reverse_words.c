#include <stdlib.h>
#include <stdio.h>

int get_length_array(char *arr)
{
    int len;
    for (len = 0; arr[len] != '\0'; ++len)
        ;
    return len;
}

char *reverseWords(const char *text)
{
    int len = get_length_array(text);
    char *retstr = "";
    for (int i = 0; i < len; i++)
    {
        }
    // <---- hajime!
}

int main(int argc, char **argv)
{
    char *test_string = "Test";

    test_string = reverseWords(test_string);

    printf("%s\n\n", test_string);

    return 0;
}