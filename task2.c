#include <stdio.h>

int main()
{
	int num1 = 10;
	int num2 = 20;

	int* ptr = &num1;
	printf("before %d\n", *ptr);
	*ptr = 30;
	printf("after %d\n", *ptr);

	return 0;
}