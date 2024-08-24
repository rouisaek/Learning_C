#include <stdio.h>
#include <stdbool.h>
#include "mimic.h"

int main()
{
    char name[] = "Test test TEST";
    int leg = get_str_len(name);

    printf("%s\n", swapcase(name, leg));

    return 0;
}

int get_str_len(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

bool is_null_or_empty(char str[])
{
    return (str == NULL || str[0] == '\0');
}

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

char *swapcase(char str[], int size)
{
    /*
        1. Check if the string for null or empty.
        2. Get the string for manipulation.
        3. Swap the lowercase latters to uppercase letters.
        4. Swap the uppercase letters to lowercase latters.
    */

    if (!is_null_or_empty(str))
    {
        for (int i = 0; i < size; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;

            else if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
    }

    return str;
}
