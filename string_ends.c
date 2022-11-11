#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool solution(const char *string, const char *ending)
{
    if (strcmp(ending, "") == 0)
        return true;
    size_t str_len = strlen(string);
    size_t end_len = strlen(ending);
    char ret[end_len];

    char rev_string[str_len];
    strcpy(rev_string, string);
    strrev(rev_string); // reverses string

    printf("rev_string: <%s>\n", rev_string);
    strncpy(ret, rev_string, end_len);
    ret[end_len] = '\0';
    printf("ret: <%s>\n", ret);

    strrev(ret);
    printf("ret: <%s>\n", ret);

    if (strcmp(ending, ret) == 0)
        return true;

    return false;
}

void revstr(char *str1)
{
    int i, len, temp;
    len = strlen(str1);
    for (i = 0; i < len / 2; i++)
    {
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}

int main(int argc, char **argv)
{
    printf("TESTING! :\n");

    char *string = "abcabc";
    char *end = "cabc";

    bool ret = solution(string, end);

    printf("%s", ret ? "true" : "false");
    return 0;
}