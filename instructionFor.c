#include<stdio.h>
// un programme permettant de rentrer des entiers et afficher leur somme
int main()
{
    int entier, somme=0;

    for(int i=1; i<4;i++)
    {
        printf("Entrer une valeur \n");
        scanf("%d", &entier);
        somme=somme+entier;
    }

    printf("La somme des element entre est %d", somme);
}