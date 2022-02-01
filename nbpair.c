#include <stdio.h>
int main ()
{
int nombre;   		     // déclarer le nombre
printf ("Saisir nombre\n");  // on saisit un nombre et on va à la ligne
scanf ("%d", &nombre);       
if (nombre%2 == 0)	     // si le nombre déclaré divisé par deux donne 0,
printf ("pair\n");	     // alors on affiche pair et on va a la ligne
else 
printf ("impair\n");         // sinon on affiche impair et on va a la ligne
return 0;		     // car le modulo de 0 
}
