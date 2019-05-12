struct personne
{
    char nom[21];
    char prenom[21];
    char age[3];
};

int NbOctetFiche();
int NbPersonne(struct personne lue);
int PositionPersonne(int Pos, struct personne lue);
