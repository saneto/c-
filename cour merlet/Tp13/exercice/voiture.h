struct Voiture
{
    char immatriculation[10];
    char marque[25];
    char Modele[25];
    char circulation[11];
    char garage[11];
    float prix;
};


int menu();
void listagevoiture(struct Voiture *stock , int Nb);
int ajoutvoiture(struct Voiture *stock ,int Nb, int N);
void Affichageinfo(struct Voiture *stock, int Nb) ;
int Suppression(struct Voiture *stock, int Nb, int N, char*select) ;
void viderBuffer();
