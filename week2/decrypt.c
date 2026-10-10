#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main (void)
{
    string name = get_string("give me a sentance :");
    int key = get_int("key :");
key = key % 26; 
    for (int i = 0 , n = strlen(name); i < n; i++ )
 { 
    if ( isalpha(name[i]))
   {
    if (islower(name[i])) 
   { 
      char ceaser = (((name[i] - 'a' - key+26) %26) + 'a');
    printf("%c", ceaser); 
   }
   else 
   {
    char ceaser = ((((name[i] - 'A' - key+26) %26 )  + 'A')  );
    printf("%c", ceaser);
   }
}
   
   else 
   {
    printf("%c", name[i]);
   }
 }
   printf("\n");
 }
