#include <stddef.h> // NULL

// returned buffer should be dynamically allocated and will be freed by a caller
char *solution(const char *camelCase)
{

    char *ret = (char *)malloc(strlen(camelCase) * sizeof(char));
    if (ret == NULL)
        exit(0);

    for (size_t i; i < strlen(camelCase); i++)
    {
        if ((camelCase[i] >= 65 && camelCase[i] <= 90))
        {
        }
    }

    return ret;
}

int main(int argc, char **argv)
{

    return 0;
}