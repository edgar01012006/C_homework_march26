#include <stdio.h>

int main()
{
	int* ptr = NULL;
	int num = 0;

	if (ptr == NULL)
	{
		printf("ptr == NULL\n");
	}
	else
	{
		printf("ptr != NULL\n");
	}

	ptr = &num;

	printf("num = %d\n", *ptr);

	return 0;
}