#include <stdio.h>
int main()
{
float nombre1, nombre2, nombre3;
float nombre4, nombre5, nombre6;
int quotient, reste;
printf ("Ce programme permet de calculer la somme, le produit, la différence et la divison réelle et entière de deux nombres\n");

printf ("choisissez un premier nombre\n ");
scanf ("%f", &nombre1);

printf ("choisissez un second nombre\n ");
scanf ("%f", &nombre2);

printf ("La somme des deux nombres est: \n");
nombre3= nombre1 + nombre2;
printf ("%f\n", nombre3);

printf ("Le produit des deux nombre est: \n");
nombre4= nombre1 * nombre2;
printf ("%f\n", nombre4);

printf ("La différence entre le premier et le deuxieme nombre est:\n");
nombre5= nombre1 - nombre2;
printf ("%f\n", nombre5);

printf ("La division réelle du permier nombre sur le second est:\n");
nombre6= nombre1 / nombre2;
printf ("%f\n", nombre6);

printf ("Le quotient de la division entière du premier nombre sur le second est:\n");
quotient= nombre1 / nombre2;
printf ("%d\n", quotient);
printf ("Le reste est:\n");
reste= nombre1 - nombre2 * quotient;
printf ("%d\n", reste);

return 0;
}
