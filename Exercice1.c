#include <stdio.h>
int main()
{
char sexe;
int temps;
printf ("Saisir votre sexe (M|F)\n");
scanf ("\n%c", &sexe);
printf ("Rentrez le temps en minutes\n");
scanf ("%d", &temps);

if (sexe == 'M')
{
if (temps < 135)
printf ("Vous êtes acceptés aux Jeux olympiques\n");
else printf ("Vous êtes refusés aux Jeux olympiques\n");
}

else {
if (temps < 155)
printf ("Vous êtes acceptés aux Jeux olympiques\n");
else printf ("Vous êtes refusés aux Jeux olympiques\n");
}
return 0;
}




