#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int swap = 0;
    int* ptr = &swap;
    
    printf("before %d %d\n", num1, num2);

    *ptr = num1;
    num1 = num2;
    num2 = *ptr;

    printf("after %d %d\n", num1, num2);

    return 0;
}
