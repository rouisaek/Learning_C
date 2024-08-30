#include <stdbool.h>

#ifndef STRING_UTILS_H
#define STRING_UTILS_H

// Function prototypes
int get_str_len(char str[]);
bool is_null_or_empty(char str[]);
char to_uppercase(char *ch);
char to_lowercase(char *ch);
void swapcase(char *arr, int size);

#endif // STRING_UTILS_H
