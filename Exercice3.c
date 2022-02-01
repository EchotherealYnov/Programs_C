#include <stdio.h>
int main()
{
int nombre1;
int nombre2;
printf ("Saisir un nombre\n");
scanf ("%d", &nombre1);
printf ("Saisir un autre nombre\n");
scanf ("%d", &nombre2);
if (nombre1 > nombre2)
printf ("Le nombre le plus grand est %d\n", nombre1);
else printf ("Le nombre le plus grand est %d\n", nombre2);
return 0;
}

