#include <stdio.h>
int main()
{
int argent;
int billet;
int billett;
int billettt;
int billetttt;
int restepiece;
printf ("Entrer une somme d'argent entière\n");
scanf ("%d", &argent);
billet= argent/500;
billett= (argent-billet*500)/200;
billettt= (argent-(billet*500+billett*200))/100;
billetttt= (argent-(billet*500+billett*200+billettt*100))/50;
restepiece= (argent-(billet*500+billett*200+billettt*100+billetttt*50));
printf ("%d\n", billet);
printf ("%d\n", billett);
printf ("%d\n", billettt);
printf ("%d\n", billetttt);
return 0;
}

