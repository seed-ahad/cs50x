#include <stdio.h>
int main() {
    int side_lenght;
    int side_width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &side_lenght);
    printf("Enter the width of the rectangle: ");
scanf("%d", &side_width);
int parameter = 2 * (side_lenght + side_width);
    printf("The parameter of the rectangle is: %d\n", parameter);
    return 0;
}