#include <stdio.h>
#include<cs50.h>
int main ()
{
    int h;
    h = get_int ("enter hieght between 1 and 8:\n");
    do
    {
        if (h < 1 || h > 8)
        {
            h = get_int ("enter hieght between 1 and 8:\n");
        }
    }
    while (h < 1 || h > 8);
for (int i = 0; i < h; i++)
{
    for( int j = 0; j< h-i-1; j++)
    {
        printf(" ");
    } 
    for (int k = 0; k < i + 1; k++)
    {
        printf("#");
    }
    printf("\n");
}
}