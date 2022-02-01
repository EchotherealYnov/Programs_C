#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

int nombre;
srand(time(NULL));
nombre  = rand()%100;
printf ("%d\n", nombre);

if (nombre%2 == 0)
printf ("Le nombre est pair\n");
else printf ("Le nombre est impair\n");

return 0;
}
