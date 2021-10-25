#include <stdio.h>

int main() {
    // Declare input minute, output hour and minute
    int input_minute, output_hour, output_minute;

    // Input the minute
    printf("Enter the minute: ");
    scanf("%d", &input_minute);

    // Calculate the input minute in hour and remaining minute
    output_minute = input_minute % 60;
    output_hour = (input_minute - output_minute) / 60;
    printf("The minute is converted to hour: %d hours %d minutes", output_hour, output_minute);

    return 0;
}
