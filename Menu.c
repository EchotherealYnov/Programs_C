#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int nombre;
printf ("Entrez un nombre entre 1 et 5\n");
printf ("Charger un fichier   :1\n");
printf ("Modifier un fichier   :2\n");
printf ("Sauvegarder un fichier   :3\n");
printf ("Imprimer   :4\n");
printf ("Quitter   :5\n");
printf ("Votre choix ?:\n");
scanf ("%d", &nombre);
{
if (nombre==1)
printf ("Charger un fichier\n");
}
{
if (nombre==2)
printf ("Modifier un fichier\n");
}
{
if (nombre==3)
printf ("Sauvegarder un fichier\n");
}
{
if (nombre==4)
printf ("Imprimer\n");
}
{
if (nombre==5)
printf ("Quitter\n");
}


return 0;
}
