#include <stdio.h>

int main() {
    // 1. Variable Declaration
    int length = 5;
    int width = 10;
    int area;

    // 2. Calculation
    area = length * width;

    // 3. Printing the result
    // %d is a format specifier used for integers
    printf("The length is %d\n", length);
    printf("The width is %d\n", width);
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}