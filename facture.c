#include <stdio.h>
int main()
{
char nom [30];
float prix;
int quantite;
float total;
printf ("Ce programme permet de sortir une facture\n");
printf ("Saisir le nom du produit\n");
scanf ("%s", nom);
printf ("Saisir le prix hors taxe du produit\n");
scanf ("%f", &prix);
printf ("Saisir la quantité de l'article\n");
scanf ("%d", &quantite);
total=(prix + prix * 20.6 / 100)* quantite;
printf ("%s %d\n", nom, quantite);
printf ("%f\n", total);
return 0;
}

