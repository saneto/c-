#include <stdio.h>
#include <stdlib.h>
#include "voiture.h"
#include <string.h>





int menu()
{
    int r;
    do
    {
        printf ("************************************Menu**************************************\n");
        printf ("Ajout d’une nouvelle voiture \t\t\t\t\t\t :1\n");
        printf ("Listage des informations pour toutes les voitures présentes dans le stock:2\n");
        printf ("Suppression d’une voiture \t\t\t\t\t\t :3\n");
        printf ("Affichage des informations d’une voiture \t\t\t\t :4\n");
        printf ("Sortire du programme.\t\t\t\t\t\t\t :0\n");
        printf ("******************************************************************************\n");
        printf ("-->Entrez votre choix: ");
        scanf("%i", &r);
        viderBuffer();
        if((r<0) || (r>4))
        {
             printf ("Veuillez saisir un choix valide\n");
        }
    }while((r<0) || (r>4));
    return r;
}

void listagevoiture(struct Voiture*stock , int Nb)
{
    int i;
    for(i=0; i<Nb; i++)
    {
        printf ("Immatriculation :");
        printf ( stock[i].immatriculation);
        printf ( "\n");
        printf ("Marque :");
        printf ( stock[i].marque);
        printf ( "\n");
        printf ("Modèle :");
        printf ( stock[i].Modele);
        printf ( "\n");
        printf ("Date de première mise en circulation :");
        printf ( stock[i].circulation);
        printf ( "\n");
        printf ("Date de mise en garage :");
        printf ( stock[i].garage);
        printf ( "\n");
        printf ("Prix :");
        printf ("%.2f", stock[i].prix);
        printf ("\n\n");
    }
}

int ajoutvoiture(struct Voiture *stock , int N)
{
    int i, r=1;
    int an[13] = {0 , 31 , 28 , 31, 30, 31 , 30 , 31 ,31 , 30 , 31 , 30, 31 };
    int j=0,m=0,a=0,j2=0,m2=0,a2=0;
    int ret;
    ret=sscanf(stock[N].circulation,"%2d/%2d/%4d", &j,&m,&a);
    if(ret<3)
    {
        return 6;
    }
    ret=sscanf(stock[N].garage,"%2d/%2d/%4d", &j2,&m2,&a2);
    if(ret<3)
    {
        return 7;
    }
    if((stock[N].immatriculation[0]<65)||(stock[N].immatriculation[0]>90))
    {
        r=2;
        return r;
    }
    if((stock[N].immatriculation[1]<65)||(stock[N].immatriculation[1]>90))
    {
        r=2;
        return r;
    }
    if(stock[N].immatriculation[2]!=45)
    {
        r=2;
        return r;
    }
    if((stock[N].immatriculation[3]<48)||(stock[N].immatriculation[3]>57))
    {
        r=2;
        return r;
    }
    if((stock[N].immatriculation[4]<48)||(stock[N].immatriculation[4]>57))
    {
        r=2;
        return r;
    }
    if((stock[N].immatriculation[5]<48)||(stock[N].immatriculation[5]>57))
    {
        r=2;
        return r;
    }
    if(stock[N].immatriculation[6]!=45)
    {
        r=2;
        return r;
    }
    if((stock[N].immatriculation[7]<65)||(stock[N].immatriculation[7]>90))
    {
        r=2;
        return r;
    }
    if((stock[N].immatriculation[8]<65)||(stock[N].immatriculation[8]>90))
    {
        r=2;
        return r;
    }
    for(i=0; i<N; i++)
    {
       if(strcmp(stock[i].immatriculation,stock[N].immatriculation)==0)
            {
                r=0;
                return r;
            }
    }
    if((m<1)||(m>12))
    {
        r=3;
        return r;
    }
    if(j>an[m])
    {
        r=4;
        return r;
    }
    if((a<1980)||(a>2014))
    {
        r=5;
        return 5;
    }

    return r;
}

void Affichageinfo(struct Voiture *stock, int Nb)
{
    char select[10];
    int i;
    printf("Veuillez saisir le numéro d’immatriculation de la voiture :\n");
    scanf("%9s",select);
    for (i=0; i<Nb; i++)
    {
        if(strcmp(stock[i].immatriculation,select)==0)
        {
            printf ( stock[i].immatriculation);
            printf ( "\t");
            printf ( stock[i].marque);
            printf ( "\t");
            printf ( stock[i].Modele);
            printf ( "\t");
            printf ( stock[i].circulation);
            printf ( "\t");
            printf ( stock[i].garage);
            printf ( "\n");
        }
    }
}

int Suppression(struct Voiture *stock, int Nb, int N,char*select)
{
    int i,r=0;
    for (i=0; i<Nb; i++)
    {
        if(strcmp(stock[i].immatriculation,select)==0)
        {
            /*stock[i].immatriculation[0]='\0';
            stock[i].marque[0]='\0';
            stock[i].Modele[0]='\0';
            stock[i].circulation[0]='\0';
            stock[i].garage[0]='\0';
            stock[i].prix=0;*/
            strcpy(stock[i].immatriculation,stock[N-1].immatriculation);
            strcpy(stock[i].marque,stock[N-1].marque);
            strcpy(stock[i].Modele,stock[N-1].Modele);
            strcpy(stock[i].circulation,stock[N-1].circulation);
            strcpy(stock[i].garage,stock[N-1].garage);
            stock[i].prix=stock[N-1].prix;
            r=1;
        }
    }
    return r;
}
void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}
int initialiserstockvoitures(struct Voiture *stock)
{
    int ret=0;
    char *res;
    FILE * pfic;
    char cope[100];
    pfic=fopen("stock.txt", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    do
    {
        res=fgets(cope,100,pfic);
        sscanf (cope,"%s %s %s %s %s %f",stock[ret].immatriculation,stock[ret].circulation,stock[ret].garage,stock[ret].marque,stock[ret].Modele,&(stock[ret].prix));
        ret++;
    }while(res!=NULL);
    ret--;
    fclose(pfic);
    return ret;
}
int sauvegarder(struct Voiture *st, int Nb)
{
    int i;
    FILE * pfic;
    pfic=fopen("stock.txt", "w");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    for(i=0; i<Nb;i++)
    {
        fprintf(pfic,"%s %s %s %s %s %.2f \n",st[i].immatriculation,st[i].circulation,st[i].garage,st[i].marque,st[i].Modele, st[i].prix);
    }
    fclose(pfic);
    return 0;
}
