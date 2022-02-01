#include <stdio.h>
#include <math.h>
int main()
{
float nombre;
float nombre1;
float nombre2;
float nombre3;
printf ("Saisir un nombre réel\n");
scanf ("%f", &nombre);
nombre1= nombre*nombre;
printf ("Le carré de %f\t", nombre);
printf ("est %f\n", nombre1);
nombre2= nombre*nombre*nombre;
printf ("Le cube de %f\t", nombre);
printf ("est %f\n", nombre2);
if (nombre > 0)
printf ("La racine est %f\n", sqrt(nombre));
else printf ("La racine d'un nombre négatif est impossible\n");

return 0;
}



