#include <stdio.h>
int main ()
{
int marks;
printf("Enter your marks: ");
scanf("%d",&marks );
if (marks >= 90 && marks <= 100)
{printf("you got a garade A\n");
}
else if (marks >= 80 && marks < 90)
{
    printf(" you got a garade B\n");
}
else if (marks >= 70 && marks < 80)
{
    printf("you got a garade C\n");
}
else if (marks >= 60 && marks < 70)
{
    printf("you got a garade D\n");
}
else if (marks >= 0 && marks < 60)
{
    printf("you got a garade F\n");
}
else
{
    printf("Invalid marks\n");
}
}