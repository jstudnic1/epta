#include <stdio.h>

size_t my_strlen(const char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
