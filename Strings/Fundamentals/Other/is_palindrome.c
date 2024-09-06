#include <stdio.h>
#include <ctype.h>

int is_palindrome(const char str[])
{
  int i = 0;
  int j = 0;
  int len = 0;

  // Calculate the length of the string
  while (str[len] != '\0')
  {
    len++;
  }

  // Initialize the start and end indices
  i = 0;
  j = len - 1;

  // Traverse the string from both ends
  while (i < j)
  {
    // Ignore spaces, non-alphanumeric characters, and letter case
    while (!isalnum(str[i]) && i < j)
    {
      i++;
    }
    while (!isalnum(str[j]) && i < j)
    {
      j--;
    }

    // Convert characters to lowercase for comparison
    char ch1 = tolower(str[i]);
    char ch2 = tolower(str[j]);

    // Compare the characters
    if (ch1 != ch2)
    {
      return 0;
    }

    // Move to the next characters
    i++;
    j--;
  }

  // The string is a palindrome
  return 1;
}
