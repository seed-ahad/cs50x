#include <stdio.h>
int main ()
{
    int a;
    int b;int c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int average = (a + b + c) / 3;
    printf("The average of the three numbers is: %d\n", average);
    return 0;
}
