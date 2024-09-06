#include <stdio.h>

char *my_strchr(const char s[], char c,char dist[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            int j = 0;
            while (s[i] != '\0')
            {
                dist[j++] = s[i++];
            }
            dist[j] = '\0';
            return dist;
        }
        i++;
    }
    return NULL;
}
