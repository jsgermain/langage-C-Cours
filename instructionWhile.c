#include<stdio.h>
/* 
Un programme permettant aux utilisateur de rentrer leur âge. La valeur doit être comprise entre 0
et 100. Si oui le programme prend fin, sinon il demande à l'utilisateur de réessayer.
*/
int main()
{
    int age;
    
    printf("Entrer votre age \n");
    scanf("%d",&age);
    

    while(age<0 || age>100)
    {
        printf("Vous avez %d ans,  votre age est incorrect, veuillez reessayer\n", age);
        scanf("%d", &age);
    }
    
    printf("Age correct, vous avez %d ans", age);
}