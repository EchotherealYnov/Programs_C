#include <stdio.h>

int addition(int a, int b)
{
int resu;
resu= a+b;
return resu;
}
int soustraction(int a, int b)
{
int resu;
resu= a-b;
return resu;
}
int division(int a, int b)
{
float resu;
resu= a/b;
return resu;
}
int multiplication(int a, int b)
{
int resu;
resu= a*b;
return resu;
}


int main ()
{
int x; int y; float resu;
char operation;
printf("Saisir deux nombres a et b\n");
scanf("%d", &x);
scanf("%d", &y);

printf("Choisissez votre opération:\n");
printf("+ pour addition:\n");
printf("- pour soustraction:\n");
printf("/ pour division:\n");
printf("* pour multiplication:\n");
scanf("%s", operation);

switch (operation)
{
case '+' :{addition(x, y);break;}

case '-' :{soustraction(x, y);break;}

case '/' :{division(x, y);break;}

case '*' :{multiplication(x, y);break;}
default : printf("Ce n'est pas une opération a faire \n");
}

return 0;
}
