#include<stdio.h>
#include<string.h>
/*
Comparer deux chaines de caractère 
strcmp(chaine1, chaine2);
la fonction retourne un resultat entier
0 => si les deux chaines sont à égalité
1 => si la chaine1 est supérieur
-1 => si la chaine1 est inférieur
*/
int main()
{
    printf("La comparaison entre ABC et ABC est %d \n", strcmp("ABC","ABC")); // égalité
    printf("La comparaison entre ABC et DEF est %d \n", strcmp("ABC","DEF")); // chaine1 est inférieur
    printf("La comparaison entre DEF et ABC est %d \n", strcmp("DEF","ABC"));// chaine1 est supérieur

}