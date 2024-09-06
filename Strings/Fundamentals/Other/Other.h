#include <stdio.h>
#ifndef F_OTHER_H
#define F_OTHER_H

void remove_spaces(char s[]);
int is_palindrome(const char str[]);
int count_words(const char str[]);
void reverse_string(char s[]);
int is_substring(const char str[], const char sub[]);
char *get_substring(const char str[], size_t start, size_t len, char buf[]);
void to_upper(char s[]);
#endif