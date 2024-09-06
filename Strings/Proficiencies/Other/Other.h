#include <stdio.h>
#ifndef P_OTHER_H
#define P_OTHER_H

int is_valid_email(const char email[]);
int is_anagram(const char str1[], const char str2[]);
void slot_expansion(char str[]);
void replace_word(char str[], const char old_word[], const char new_word[]);

#endif