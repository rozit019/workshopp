#include <stdio.h>

int add(int x, int y)
{
    int sum = x + y;
    printf("Calculating...\n");
    return sum;
}

int main()
{
    int a = 10;
    int b = 20;

    int result = add(a, b);   // Set breakpoint here

    printf("Result = %d\n", result);

    return 0;
}