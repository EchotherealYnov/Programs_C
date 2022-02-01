#include <string.h>
#include <stdio.h>

int main ()
{
  char str[50];
  int len;

   puts ("Saisir une chaine de caractères");
   gets ( str );
   len = strlen(str);
   printf("La longueur de %s est de %d caractères\n", str, len);
   
  

return 0;
}
