#include<stdio.h>
#include<string.h>
/*
Ajouter N caractère à une chaine
strncat(chaine_destination, chaine_source, nombre_caractère);
*/
int main()
{
    char parent1[30] =" Johnes Saint Germain ";
    char parent2[30] = ", Norane Jean ";

    puts(parent1); // parent1 garde sa valeur d'initialisation
    strncat(parent1,parent2, 8); // ici 8 CARACTERE parent2 s'ajoute au parent1
    puts(parent1) ; // ici s'affiche les parent1 et 2
}