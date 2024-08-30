#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stddef.h>

int countElements(int arr[]);

int main()
{
    unsigned char matrix[6][5];

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int colums = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int count = 65;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            if (count >= 65 && count <= 90)
                matrix[i][j] = count;
            else
                matrix[i][j] = 0;
            count++;
        }
    }

    // Print matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            if (matrix[i][j] != '\0')
                printf("%2c ", matrix[i][j]);
            else
                printf("%2c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
