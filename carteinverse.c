#include <stdio.h>
#include <string.h>
int main ()
{
char prenom [30];
char nom [30];
int sexe;
char genre [10];
int annee;
int mois;
int departement;
printf ("Saisir votre nom et prénom\n");
scanf ("%s%s", nom, prenom);
printf ("Saisir votre premier chiffre de votre carte vitale\n");
scanf ("%d", &sexe);
printf ("Saisir les deux chiffres suivants\n");
scanf ("%d", &annee);
printf ("Saisir les deux autres chiffrent suivants\n");
scanf ("%d", &mois);
printf ("Saisir les chiffres restants\n");
scanf ("%d", &departement);
if (sexe == 1)
strcpy(genre,"Monsieur");
else strcpy(genre,"Madame");
printf ("Vous etes %s %s\n", genre, nom);
annee = annee+2000;
printf ("Vous etes née en %d\n", annee);
return 0;
}




