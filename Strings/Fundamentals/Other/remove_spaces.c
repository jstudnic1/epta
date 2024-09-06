#include <stdio.h>

void remove_spaces(char s[])
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        if (s[i] != ' ')
        {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
}
