#include<stdio.h>
/*
remplir un tableau trouver la valeur maximale du tableau et l'afficher
*/
int main()
{
    // on déclare les variables
    int t[6]; //le tableau
    int i; // l'indice
    int max; // contiendra la valeur max du tableau

// la 1ère boucle permet de remplir le tableau 
    for(i=0; i<6; i++)
    {
        printf("t[%d] => ", i); //t[%d] permet d'afficher le tableau et l'indice, i prend la valeur
        scanf("%d", &t[i]);
    }
// la 2ème boucle parcours le tableau pour trouver la valeur max
    for(max=t[0], i=1; i<6; i++)
    {
        if(max < t[i])
            max = t[i];
    }

    printf(" La valeur maximum du tableau est : %d", max);
}