#include <stdio.h>
int main ()
{
char prenom [30];
char nom [30];
char sexe;
int annee;
int mois;
int departement;
printf ("Saisir votre prenom\n");
scanf ("%s", prenom);
printf ("Saisir votre nom\n");
scanf ("%s", nom);
printf ("Saisir votre sexe M|F\n");
scanf ("\n%c", &sexe);
printf ("Saisir votre annee naissance\n");
scanf ("%d", &annee);
printf ("Saisir votre mois naissance\n");
scanf ("%d", &mois);
printf ("Saisir votre departement naissance\n");
scanf ("%d", &departement);
if (sexe == 'M')
  sexe = 1;
else sexe = 2;
annee = annee%100;
departement = departement/1000;
printf ("Vous êtes\n");
printf ("%s\t %s\n", prenom, nom);
printf ("votre numero est:\n%d\t%02d\t%02d\t%d\n", sexe, annee, mois, departement);
return 0;
}





 

