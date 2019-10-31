#include<stdio.h>
#include<string.h>
/*
Ajouter le contenu d'une chaine à une autre
strcat(chaine_destination, chaine_source);
*/
int main()
{
    char parent1[30] =" Johnes Saint Germain ";
    char parent2[30] = " Norane Jean ";

    puts(parent1); // parent1 garde sa valeur d'initialisation
    strcat(parent1,parent2); // ici parent2 s'ajoute au parent1
    puts(parent1) ; // ici s'affiche les parent1 et 2
}