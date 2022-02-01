#include<stdio.h>

int main()
{
char nom[10];
int nombre;
int nombre pair;
int nombre impair;
printf("entre le nombre \n");
scanf("%d",&nombre);

printf("nom  de la personne \n");
scanf("%s",nom);

printf("annee de naissance\n");
scanf("%d",&anneedenaissance);


printf("mois de naissance\n");
scanf("%d",&moisdenaissance);


printf("ville de naissance\n");
scanf("%d",&villedenaissance);
printf("vous êtes :%s\n votre num secu est :\n",nom);
printf("%d\t",sexe);

printf("%02d\t",anneedenaissance%100);

printf("%02d\t",moisdenaissance);

printf("%2d\n",villedenaissance/1000);
 
}

