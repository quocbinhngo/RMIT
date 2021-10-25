#include <stdio.h>

int main() {
    // Declare the assessment score
    int asmt1, asmt2, asmt3;

    // Input the assessment scores
    printf("Enter 3 assessment scores: ");
    scanf("%d %d %d", &asmt1, &asmt2, &asmt3);

    // Calculate the final result and print out
    float final_result = (asmt1 * 0.3 + asmt2 * 0.3 + asmt3 * 0.4);
    printf("The final result is %.2f", final_result);

    return 0;
}
