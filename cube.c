#include<stdio.h>
#include<math.h>

int main ()
{
int number;
printf ("enter any number:\n");
scanf("%d", &number);
int cube = pow(number, 3);
printf("The cube of the number is: %d\n", cube);
return 0; 
}