#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter a character: ");
    scanf("%c", &alpha);
    if(alpha >= 'a' && alpha <= 'z')
    {
printf("character is not capital letter \n");

}
else if(alpha >= 'A' && alpha <= 'Z')
{
    printf("character is capital letter \n");
}
else
{
    printf("character is not a letter \n");
}
}