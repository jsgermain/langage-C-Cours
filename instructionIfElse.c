#include<stdio.h>
//Structure conditionnelle compacte (max & min)
int main()
{
    // déclaration des variables
    int nb1,nb2, max, min;
    
    printf("Entrer un premier nombre : \n");
    scanf("%d",&nb1);

    printf("Entrer un deuxieme nombre :\n");
    scanf("%d",&nb2);
    // Opération
    max=(nb1>nb2)? nb1 : nb2;
    min=(nb1<nb2)? nb1 : nb2;
    //Affichage
    printf("Le maximum est : %d et le minimum est le %d", max, min);
}