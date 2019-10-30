#include<stdio.h>

int main()
{
    int compteur=1; 

    /* Dans la boucle while l'initialisation du compteur se fait avant la boucle
    l'incrémentation est une instruction dans la boucle
    */

    while(compteur<=5)
    {
        printf("compteur = %d \n", compteur);  
        compteur++;
    }

puts("Ici commence la boucle for");

    /* le compteur est initialisé dans la boucle
    l'incrémentation se fait dans la boucle
    */
    for(compteur=1; compteur<=5; compteur++)
    {  
        printf("compteur = %d \n", compteur);
    }
    
    


}