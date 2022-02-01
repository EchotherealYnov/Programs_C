#include <stdio.h>
int main()
{
int a;
int b;
int c;
printf ("Saisir un nombre\n");
scanf ("%d", &a);
printf ("Saisir un différent nombre\n");
scanf ("%d", &b);
printf ("Saisir un autre nombre différent\n");
scanf ("%d", &c);

if (a>c && a>b && b>c)
{
printf ("%d < %d < %d\n", c, b , a);
}
if (a>c && a>b && c>b)
{
printf ("%d < %d < %d\n", b, c, a);
}
if (b>c && b>a && c>a)
{
printf ("%d < %d < %d\n", a, c, b);
}
if (b>c && b>a && a>c)
{
printf ("%d < %d < %d\n", c, a, b);
}
if (c>a && c>b && a>b)
{
printf ("%d < %d < %d\n", b, a, c);
}
if (c>a && c>b && b>a)
{
printf ("%d < %d < %d\n", a, b, c);
}

return 0;
}

