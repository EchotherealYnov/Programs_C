#include <stdio.h>
int main()
{
int nombre1;
int nombre2;
int nombre3;
int var;
printf ("Saisir un nombre\n");
scanf ("%d", &nombre1);
printf ("Saisir un différent nombre\n");
scanf ("%d", &nombre2);
printf ("Saisir un autre nombre différent\n");
scanf ("%d", &nombre3);
{
if (nombre1>nombre2)
var=nombre1;
else var=nombre2;
}
{
if (var<nombre3)
var=nombre3;
printf ("Le nombre le plus grand est: %d\n", var);
}
return 0;
}

