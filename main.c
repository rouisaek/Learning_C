#include <stdio.h>

char to_uppercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - ('a' - 'A');

    return ch;
}

char to_lowercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + ('z' - 'Z');

    return ch;
}

char swapcase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;

    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;

    return ch;
}

int main()
{
    printf("Latter casing swaped: %c\n", swapcase('a')); // Case one
    printf("Latter casing swaped: %c\n", swapcase('B')); // Case two
    printf("Latter casing swaped: %c\n", swapcase('1')); // Case three

    return 0;
}
