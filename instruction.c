#include<stdio.h>

int main()
{
    int compteur=1; // initialiser
    for(; compteur<=7; compteur++) // ; du fait de l'initialisation
    printf("7 - %d = %d \n", compteur, 7-compteur);
}