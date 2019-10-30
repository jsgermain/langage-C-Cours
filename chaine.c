#include<stdio.h>
/*
Comprendre les chaines des caractères
*/
int main()
{
    char chaine[30] ="Johnes Saint Germain";
    int i;

    for(i=0; chaine[i]!='\0'; i++) // chaine[i]!='\0', caractère null marque la fin de la chaine 
    {
        printf("%c\n", chaine[i]);
    }
}