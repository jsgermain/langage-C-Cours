#include<stdio.h>

int main()
{
    int region[6]={77,75,95,91,92,93};
    
    printf("Les departements de l'IDF sont :\n");
    
    for(int i=5; i>=0; i--)
    {
        printf("En position %d, on trouve le departement du %d \n", i, region[i]);
    }
}