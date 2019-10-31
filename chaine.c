#include<stdio.h>
#include<string.h>
/*
Copier les carctères d'une chaine vers une autre
strcpy(chaine_destination, chaine_source);
*/
int main()
{
    char parent1[30] ="Johnes Saint Germain";
    char parent2[30] = "Norane Jean";

    puts(parent1); // parent1 garde sa valeur d'initialisation
    strcpy(parent1, parent2); // ici parent1 prend la valeur du parent2
    puts(parent1); // ici parent1 a la valeur de celui de 1
}