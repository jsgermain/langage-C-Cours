#include<stdio.h>
/*
Tableau de deux dimensions
*/
int main()
{
    int tab[6][3]=
    {
        {5,9,88},
        {7,11,92},
        {13,4,10},
        {5,1,14},
        {30,12,15},
        {22,6,19}
    };
    int ligne, colonne;

    for(ligne=0; ligne<6; ligne++)
    {
        for(colonne=0; colonne<3; colonne++)
        {
            printf("tab[%d][%d] %d \n", ligne, colonne, tab[ligne][colonne]);
        }
    }
}