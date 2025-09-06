#include <stdio.h>

int main() 
{
    char name[] = "Raden Aryo Bimo Pramudyo";
    char NIM[] = "2902715753";

        printf("Nama: %s\n", name);
        printf("NIM: %s\n", NIM);
        
    int length, width, area;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    area = length * width;

    printf("The area of the rectangle is: %d\n", area);

    return 0;
}