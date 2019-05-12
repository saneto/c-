struct personne
{
char mdp[5];
char ident[11];
char presence[11];
};


void AfficheAccueil();
//permet d'afficher l'accueil
int AutoriserAcces(personne saisi,personne *tab,int Nb);
//fonction dans la quel on envoi les 2 tableaux des identifiant et mode de passe de tous les employés
//elle permet de vérifier la saisi des id et mdp avec le tableau et renvoi un chiffre
//selon le chiffre envoiyer on a une message qui s'affiche
void AfficheAcces(int verif);
//selon le chiffre envoiyer par la fonction AutoriserAcces il affiche un message spécifique
void AfficheFermeture();
//fonction de fin du programme quand toute les condition on était valider et apres que le gardien se sois identifier
void AcquerirBadgeEtCode(personne *saisi);
//la fonction de saisi des identifiant et des mot de passe
