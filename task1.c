#include <stdio.h>

int main()
{
	int num = 0;

	printf("enter a number\n");
	scanf("%d", &num);

	int* ptr = &num;
	
	printf("%p %p\n", &num, ptr);
	printf("%d\n", *ptr);

	return 0;
}