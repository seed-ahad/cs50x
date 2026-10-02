#include <stdio.h>
int main(void)
{
int owed;
int coins;

printf("how much change is owed?\n");
scanf("%d", &owed);
 do{ 
 if (owed < 0)
 { 
    printf ("enter again\n");
    scanf("%d", &owed);
 }
}while(owed < 0);
 
while (owed > 0)
{
    if (owed >= 25)
    {
        owed -= 25;
        coins++;
    }
    else if (owed >= 10)
    { 
        owed -= 10;
        coins++;
    }
    else if (owed >= 5)
    {
        owed -= 5;
        coins++;
    }
    else if (owed >= 1)
    {
        owed -= 1;
        coins++;
    }
}printf("you got %d coins \n", coins);



}