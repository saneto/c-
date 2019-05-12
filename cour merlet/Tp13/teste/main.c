#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    do
    {
        printf ("Ajout d’une nouvelle voiture \t\t\t\t\t\t :4\n");
        printf ("Listage de toutes les informations pour toutes les voitures présentes dans le stock. :3\n");
        printf ("Suppression d’une voiture \t\t\t\t\t\t :2\n");
        printf ("Affichage des informations d’une voiture \t\t\t\t :1\n");
        printf ("Sortie du programme.\t\t\t\t\t\t\t :0\n");
        scanf("%i", &r);
        if((r<0) || (r>4))
        {
             printf ("Veuillez saisir un choix valide");
        }
    }while((r<0) || (r>4));
    printf ("%i", r);
    return 0;
}
