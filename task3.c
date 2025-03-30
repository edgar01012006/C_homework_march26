#include <stdio.h>

int main()
{
	char c = 'a';
	char* ptr = &c;

	printf("address before %p\n", ptr);
	ptr++;
	printf("address after  %p\n", ptr);

	return 0;
}