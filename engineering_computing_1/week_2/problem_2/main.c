#include <stdio.h>

int main() {
    // Declare VND money and USD money
    float VND_money, USD_money;

    // Input VND money
    printf("Enter money in VND: ");
    scanf("%f", &VND_money);

    // Convert VND money to USD money and print it
    USD_money = VND_money / 23150;
    printf("Converted money in USD: %.2f", USD_money);

    return 0;
}
