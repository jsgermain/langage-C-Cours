#include<stdio.h>

int main()
{
    int nb;

    puts("Entrer un chiffre");
    scanf("%d",&nb);
    
    if(nb<=4)
    {
        switch(nb)
        {
            case 1:
                puts("un");
                break;
            
            case 2:
                puts("deux");
                break;

            case 3:
                puts("trois");
                break;

            case 4:
                puts("quatre");
                break;
        }
    }

    else
    {
        switch(nb)
        {
        default :
            printf("Entrer un chiffre inferieur");
            break;
        }
    }
    
                

}