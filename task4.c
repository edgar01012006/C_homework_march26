#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int* ptr;

    printf("before %d %d\n", num1, num2); // 10 20

    ptr = &num1;
    num1 = num2;
    num2 = *ptr;

    printf("after %d %d\n", num1, num2); // 20 20

    return 0;
}
