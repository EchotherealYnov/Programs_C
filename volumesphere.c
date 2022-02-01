#include <stdio.h>
int main ()
{
float rayon;
float surface;
float volume;
printf ("Saisir le rayon d'une sphère\n");
scanf ("%f", &rayon);
surface=4*3.14*(rayon*rayon);
printf ("La surface de cette sphère est:\n");
printf ("%f\n", surface);
volume=4/3*3.14*(rayon*rayon*rayon);
printf ("Le volume de cette sphère est:\n");
printf ("\n%f", volume);
return 0;
}


