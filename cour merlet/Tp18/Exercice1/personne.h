#pragma once

struct CPersonne
{
    public:
        //Attributs
        char m_age[4];//Tableau de caractére qui contien l'âge
        char m_nom[21];//Tableau de caractére qui contien le nom
        float m_poids;//Variable de type réel qui contien le poids
        float m_taille;//Variable de type réel qui contien la taille

        //Méthodes
        /*La fonction m_Initialise() sert à initialiser les valeurs des attributs d'une personne
            - 1er paramètre : l'age de l'utilisateur
            - 2eme paramètre : le nom de l'utilisateur
            - 3eme paramètre : le poids de l'utilisateur
            - 4eme paramètre : la taille de l'utilisateur
            - pas de valeur de retour*/
        void m_Initialise(char*, char*, float,float);

        /*La fonction m_Affiche() permet d'afficher tous les attributs d'une personne
            -pas de valeur de retour */
        void m_Affiche();

        /*La fonction m_GetImc() qui permet de divisé le poids par la taille et le renvoie en valeur de retour
            - 1er paramètre : poids de l'utilisateur
            - 2eme paramètre : taille de l'utilisateur
            -renvoie le reste de la division du poids par la taille */
        float m_GetImc(float ,float);
};
