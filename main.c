#include <stdio.h>
#include "strutils.h"

int main()
{
	char arr[] = "a B c D e F g H i J k L m N o P q R s T u V w X y Z";

	int size = sizeof(arr) / sizeof(arr[0]);

	swapcase(arr, size);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			printf("\033[32m%c ", arr[i]);

		else if (arr[i] >= 'A' && arr[i] <= 'Z')
			printf("\033[33m%c ", arr[i]);
	}

	printf("\033[0m\n");

	return 0;
}
