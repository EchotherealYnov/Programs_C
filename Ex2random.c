#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MIN 1
 
int main()
{
    int nombremystere = 0,nombreRentre = 0;
    srand(time(NULL));
    nombremystere = (rand() % (MAX - MIN + 1)) + MIN;
 
    while (nombremystere != nombreRentre)
    {
        printf("Qu'elle est le nombre ?\n");
        scanf("%d", &nombreRentre);
 
        if (nombreRentre == nombremystere)
            printf("Tu as trouve le nombre\n");
 
        else {
            if (nombreRentre > nombremystere)
            printf("C'est moins\n");
         
            else printf("C'est plus!\n");
             } 
    }
    return 0;
}
