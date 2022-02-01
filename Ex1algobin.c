#include<stdio.h>

int nmb;

int main(){

printf("Saisir un nombre en base 2\n");
scanf("%d",&nmb);

{
if(nmb==00000 || nmb==00001 || nmb==00010 || nmb==00011 || nmb==00100 || nmb==00101 || nmb==00110 || nmb==00111 || nmb==01000 || nmb==01001 || nmb==01010 || nmb==01100 || nmb==01101 || nmb==01110 || nmb==01111 || nmb==10000 || nmb==10001 || nmb==10010 || nmb==10100 || nmb==10110 || nmb==10101 || nmb==10111 || nmb==11010 || nmb==11011 || nmb==11001 || nmb==11010 || nmb==11100 || nmb==11101 || nmb==11110 || nmb==11111)

printf("Correct\n");

else 
	printf("Valeur incorrecte\n");
}

return 0;
}

