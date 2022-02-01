#include <stdio.h>
int main()
{
char marque[20];
char modele[20];
int chevaux;
char numero[20];
int jour;
int mois;
int annee;

printf ("Saisir la marque de la voiture\n");
scanf ("%s", marque);
printf ("Saisir le modele\n");
scanf ("%s", modele);

printf ("Saisir le nombre de chevaux fiscaux\n");
scanf ("%d", &chevaux);

printf ("Saisir le numero d'immatriculation\n");
scanf ("%s", numero);

printf ("Saisir le jour de la mise en service\n");
scanf ("%d", &jour);

printf ("Saisir le mois de la mise en service\n");
scanf ("%d", &mois);

printf ("Saisir l'année de la mise en service\n");
scanf ("%d", &annee);
printf ("Votre voiture est une %s", marque);
printf (" %s ", modele);
printf ("avec %d chevaux\n", chevaux);
printf ("Votre numero d'immatriculation est : %s\n", numero);
printf ("La date de la premiere mise en circulation etait le : %d", jour);
printf ("|%d", mois);
printf ("|%d\n", annee);
return 0;
}


 
