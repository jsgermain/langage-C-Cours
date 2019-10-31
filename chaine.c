#include<stdio.h>
#include<string.h>
/*
Modifier la casse d'une chaine de caractère
strlwr(chaine); Minuscule
strupr(chaine); Majuscule
*/
int main()
{
    char parent1[30] =" Johnes Saint Germain ";

    puts(strlwr(parent1)); // parent1 garde sa valeur d'initialisation
    puts(strupr(parent1)) ; // ici s'affiche les parent1 et 2
}