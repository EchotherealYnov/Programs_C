#include <stdio.h>
int main ()
{
int dividende;
int diviseur;
int quotient;
int reste;
printf ("Saisir un dividende\n");
scanf ("%d", &dividende);
printf ("Saisir un diviseur\n");
scanf ("%d", &diviseur);
quotient = dividende/diviseur;
reste = dividende-diviseur*quotient;
printf ("Le quotient est\n");
printf ("%d\n", quotient);
printf ("Le reste est\n");
printf ("%d\n", reste);
}
