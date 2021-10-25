#include <stdio.h>

int main() {
    // Declare the input number and result
    int num, result = 0;

    // Input the number
    printf("Enter the number: ");
    scanf("%d", &num);

    // Calculate the result and print out
    result += (num - (num % 100)) / 100;
    num %= 100;
    result += (num - (num % 10)) / 10;
    num %= 10;
    result += num;
    printf("Sum of all digits: %d", result);

    return 0;
}
