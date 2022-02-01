#include <stdio.h>
int main()
{
float nombre;
int entier;
float decimal;
printf ("Saisir un nombre réel\n");
scanf ("%f", &nombre);
entier=nombre;
decimal=nombre-entier;
printf ("entier = %d\n", entier);
printf ("decimal = %f\n", decimal);
return 0;
}


