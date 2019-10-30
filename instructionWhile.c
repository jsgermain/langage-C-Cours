#include<stdio.h>
// instruction do while


int main()
{
    puts("Ici c'est la boucle do while"); // texte explicatif
   
    int nb =1;

    do{
        printf("Compteur = %d \n", nb);
        nb++;
    }while(nb<=5);

//--------------------------- l'instruction while -----------------------------------------------------------------

puts("Et ici commence l'intruction de la boucle While"); // texte explicatif
    int n=1;
    while(n<=5)
    {
        printf("Nombre = %d \n", n);
        n++;
    }

}
