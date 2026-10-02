#include <stdio.h>
int main ()
{ 
    int h;
    printf("enter hieght between 1 and 8:\n");
    scanf("%d", &h);
    do
    {
        if (h < 1 || h > 8)
        {printf("enter again\n");
            scanf("%d", &h);
        }

}while (h < 1 || h > 8);
for (int i = 0; i < h; i++)
{
    for (int j = 0; j < h-i-1; j++)
    {
        printf(" ");
    }
    for (int k = 0; k < i + 1; k++)
    {
        printf("*");
    }
    printf("  ");
    for (int l = 0; l < i + 1;l++)
    {
        printf("*");
    }
    printf("\n");
}
}