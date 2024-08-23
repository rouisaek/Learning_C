#include <stdio.h>
// #include "mimic.h"

char chartoupper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - ('a' - 'A');
    }

    return ch;
}

int main()
{
    char lower = 'b';
    char upper = chartoupper(lower);
    printf("Uppercase: %c\n", upper); // Output: Uppercase: B

    char non_lower = 'Z';
    char unchanged = chartoupper(non_lower);
    printf("Unchanged: %c\n", unchanged); // Output: Unchanged: Z

    return 0;
}
