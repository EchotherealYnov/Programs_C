 #include <stdio.h>
 #include <string.h>
     
    int main(int argc,char *argv[])
 {
char username[20]="s1snir";
char password[20]="SNIR2019";

if (argc<3)
{
printf("./a.out [USERNAME] [PASSWORD]\n");
} 
else { if ( (strcmp(argv[1],username)==0) && (strcmp(argv[2],password)==0)  )
{
printf("Accès autorisé\n");
}


else {
printf("Accès refusé\n");
}
}
return 0;
}
