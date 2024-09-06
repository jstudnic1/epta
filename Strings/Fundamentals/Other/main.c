#include <stdio.h>
#include "Other.h"
int main()
{
    char test1[] = "Hello Shrek";
    reverse_string(test1);
    printf("%s\n", test1); // -> "kerhS olleH"

    char test2[] = "";
    reverse_string(test2);
    printf("%s\n", test2); // -> ""
    char u_test1[] = "shrek!";
    to_upper(u_test1);
    printf("%s\n", u_test1); // -> "SHREK!"

    char u_test2[] = "";
    to_upper(u_test2);
    printf("%s\n", u_test2); // -> ""
    printf("%d\n", is_palindrome("Kayak")); // -> 1
    printf("%d\n", is_palindrome("42,24")); // -> 1
    printf("%d\n", is_palindrome("Dogma I am God")); // -> 1
    printf("%d\n", is_palindrome("Shrek is good")); // -> 0
    printf("%d\n", count_words("Hello world, Hello man and hello Shrek!")); // -> 7
    printf("%d\n", count_words("Hello,")); // -> 1
    printf("%d\n", count_words(" Hello my friend")); // -> 3
    char r_test1[] = "Shrek is good, Shrek is love";
    remove_spaces(r_test1);
    printf("%s\n", r_test1); // -> "Shrekisgood,Shrekislove"

    char r_test2[] = "";
    remove_spaces(r_test2);
    printf("%s\n", r_test2); // -> ""

    char test3[] = "           4        2      ";
    remove_spaces(test3);
    printf("%s\n", test3); // -> "42"
}
