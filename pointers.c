#include <stdio.h>

int main()
{
    int arr[16];
    int *arrStartAt = &arr[0];
    int *arrEndAt = (&arr[sizeof(arr) / sizeof(arr[0])]) - 1;

    printf("Starting address: %p\n", arrStartAt);
    printf("Ending   address: %p\n", arrEndAt);

    int loop = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < loop; i++)
    {
        if (arrStartAt == &arr[i])
            printf("%p\n", &arr[i]);

        else if (arrEndAt == &arr[i])
            printf("%p\n", &arr[i]);

        else
        {
            arr[i] += i;
            printf("%2d\n", arr[i]);
        }
    }

    return 0;
}