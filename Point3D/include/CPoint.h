#ifndef CPOINT_H
#define CPOINT_H


class CPoint
{
    public:
        /*Paramètres :
            Valeurs par défaut de x et y à 0*/
        CPoint(float =0.0, float =0.0, float =0.0);
        ~CPoint();

        /*Valeur de retour :
            float, le réel correspondant à la coordonée x du point*/
        float getX(void);

        /*Valeur de retour :
            float, le réel correspondant à la coordonée y du point*/
        float getY(void);

        /*Valeur de retour :
            float, le réel correspondant à la coordonée y du point*/
        float getZ(void);

        /*Valeur de retour :
            int, l'entier correspondant au nombre de déplacements du point*/
        int getM(void);

        /*Paramètres :
            float et float, les réels correspondant au déplacement souhaité
            du point sur son x et son y*/
        void deplacer(float, float, float);

    private:
        // Réel, comme souhaité dans l'énnoncé
        float m_x;
        // Réel, comme souhaité dans l'énnoncé
        float m_y;
        // Réel, comme souhaité dans l'énnoncé
        float m_z;
        // Entier, le nombre de mouvements ne peut être à virgule ou négatif
        int m_deplacements;
};

#endif // CPOINT_H
