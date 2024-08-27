#include "strutils.h"
#include <stdbool.h>
#include <stdio.h>

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

void swapcase(char *arr, int size)
{
    if (!(arr == NULL || arr[0] == '\0'))
    {
        for (int i = 0; i < size; i++)
        {
            if (*(arr + i) >= 'a' && *(arr + i) <= 'z')
                *(arr + i) -= 32;

            else if (*(arr + i) >= 'A' && *(arr + i) <= 'Z')
                *(arr + i) += 32;
        }
    }
}
