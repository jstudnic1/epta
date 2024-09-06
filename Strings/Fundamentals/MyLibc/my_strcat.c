#include <stdio.h>

char *my_strcat(char dst[], const char src[])
{
    int i = 0;
    int j = 0;
    while (dst[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dst[i++] = src[j++];
    }
    dst[i] = '\0';
    return dst;
}
