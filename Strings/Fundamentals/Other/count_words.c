#include <stdio.h>

int count_words(const char str[])
{
    int i = 0;
    int count = 0;
    while (str[i] == ' ')
    {
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    return count + 1;
}
