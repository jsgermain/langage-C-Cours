#include<stdio.h>

int main()
{
    int compteur=1; // initialiser
    for(; compteur<=10; compteur++) // ; du fait de l'initialisation
    printf("7x %d = %d \n", compteur, compteur*7);
}