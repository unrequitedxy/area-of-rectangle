#include <stdio.h>

int main() {
    int length, width, area;

    // Ask user for input
    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the width: ");
    scanf("%d", &width);

    // Calculate area
    area = length * width;

    // Display result
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}