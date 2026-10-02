#include<stdio.h>
int main ()
{
char chr;
printf("Enter a character: ");
scanf("%c",&chr );
if (chr >= 'A' && chr <= 'Z' || chr >= 'a' && chr <= 'z')
{
printf("The character is an alphabet.\n");  
}
else
{
printf("The character is not an alphabet.\n");
}
return 0;
}