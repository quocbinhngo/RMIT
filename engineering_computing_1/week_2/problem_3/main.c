#include <stdio.h>
#include <math.h>

int main() {
    // Declare x and y
    float x, y;

    // Input x and y
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);

    // Calculate x^y and print out
    float pow_x_y = pow(x, y);
    printf("x^y: %.2f", pow_x_y);

    return 0;
}
