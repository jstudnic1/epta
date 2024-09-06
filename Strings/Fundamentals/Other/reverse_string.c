#include <stdio.h>

void reverse_string(char s[])
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    i--;
    while (j < i)
    {
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        j++;
        i--;
    }
}
