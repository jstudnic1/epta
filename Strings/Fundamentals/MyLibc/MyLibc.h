#include <stdio.h>
#ifndef F_MYCLIB_H
#define F_MYCLIB_H

size_t my_strlen(const char str[]);
int my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char dst[], const char src[]);
char *my_strchr(const char s[], char c,char dist[]);
char *my_strcat(char dst[], const char src[]);

#endif
