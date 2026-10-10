#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
   
string name = get_string("name :");
    
        for (int i = 0, n = strlen (name); i < n - 1; i++)
        {
            printf("%i  \n", name[i]);
            if (name [i] > name [i + 1])
            {
                printf ("no\n");
                return 1;
            }
    }
    printf("yes\n");
    return 0;
}
