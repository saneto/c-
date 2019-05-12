#pragma once

class CPersonne
{
    private:
        //Attributs
        int m_age;//Tableau de caractére qui contien l'âge
        char m_nom[21];//Tableau de caractére qui contien le nom
        float m_poids;//Variable de type réel qui contien le poids
        float m_taille;//Variable de type réel qui contien la taille
    public:
        CPersonne(const char* ="\0", int = 0.0, float =0.0,float =0.0);
        //Méthodes
        /*La fonction m_Initialise() sert à initialiser les valeurs des attributs d'une personne
            - 1er paramètre : l'age de l'utilisateur
            - 2eme paramètre : le nom de l'utilisateur
            - 3eme paramètre : le poids de l'utilisateur
            - 4eme paramètre : la taille de l'utilisateur
            - pas de valeur de retour*/
        void Initialise(const char*,int, float,float);

        /*La fonction m_Affiche() permet d'afficher tous les attributs d'une personne
            -pas de valeur de retour */
        void Affiche();

        /*La fonction m_GetImc() qui permet de divisé le poids par la taille et le renvoie en valeur de retour
            - 1er paramètre : poids de l'utilisateur
            - 2eme paramètre : taille de l'utilisateur
            -renvoie le reste de la division du poids par la taille */
        float GetImc();
        void setAge(int newa);
        int getAge();
        void setNom(const char*newn);
        void getNom(char*nom);
        void setTaille(float newt);
        float getTaille();
        void setPoids(float newp);
        float getPoids();

        ~CPersonne();
};
int menu();

