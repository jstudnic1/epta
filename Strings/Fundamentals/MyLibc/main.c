#include <stdio.h>
#include "MyLibc.h"
int main()
{
    printf("%ld\n", my_strlen("Hello, World!")); // -> 13
    printf("%ld\n", my_strlen("")); // -> 0
    printf("%ld\n", my_strlen("EPITA31")); // -> 7
    char dst[14];
    const char src[] = "Hello, World!";
    my_strcpy(dst,src); // -> "Hello, World!"
    printf("%s\n",dst); // -> "Hello, World!"
    char s1[100] = "Hello, ";
    char s2[] = "World!";
    char *res = my_strcat(s1, s2);
    printf("%s\n", s1); // -> "Hello, World!"
    printf("%s\n", res); // -> "Hello, World!"
    char s[] = "Hello, World!";
    char dest[500] = "";
    char *result = my_strchr(s,'W',dest);
    printf("%s\n",result); // -> "World!"
    printf("%s\n",dest); // -> "World!"
    printf("%d\n", my_strcmp("popcorn", "popular")); // -> -18
    printf("%d\n", my_strcmp("Shrek", "Shrek")); // -> 0
    printf("%d\n", my_strcmp("a", "")); // -> 97
}
