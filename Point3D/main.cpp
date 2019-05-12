#include <iostream>
#include "include/CPoint.h"

using namespace std;

int main()
{
    CPoint a;
    CPoint b(1);
    CPoint c(2,2);
    CPoint d(3,3,3);
    CPoint e(4,4,4);

    float deplaceX;
    float deplaceY;
    float deplaceZ;

    cout << "Affichage des points après leur instanciation :" << endl
         << "a(" << a.getX() << "," << a.getY() << "," << a.getZ() << ")" << endl
         << "b(" << b.getX() << "," << b.getY() << "," << b.getZ() << ")" << endl
         << "c(" << c.getX() << "," << c.getY() << "," << c.getZ() << ")" << endl
         << "d(" << d.getX() << "," << d.getY() << "," << d.getZ() << ")" << endl
         << "e(" << e.getX() << "," << e.getY() << "," << e.getZ() << ")" << endl << endl;

    a.deplacer(1,1,0);
    b.deplacer(1,0,0);
    c.deplacer(0,1,0);
    d.deplacer(1.7,2.4,0);
    d.deplacer(5.7,6.4,0);
    e.deplacer(4,4,4);

    cout << "Affichage des points après leur déplacement(s) :" << endl
         << "a(" << a.getX() << "," << a.getY() << "," << a.getZ() << ") avec " << a.getM() << " déplacement sur x et y" << endl
         << "b(" << b.getX() << "," << b.getY() << "," << b.getZ() << ") avec " << b.getM() << " déplacement sur x." << endl
         << "c(" << c.getX() << "," << c.getY() << "," << c.getZ() << ") avec " << c.getM() << " déplacement sur y." << endl
         << "d(" << d.getX() << "," << d.getY() << "," << d.getZ() << ") avec " << d.getM() << " déplacement sur y et y." << endl
         << "e(" << e.getX() << "," << e.getY() << "," << e.getZ() << ") avec " << e.getM() << " déplacement sur x, y et z." << endl;

    cout << "Entrez le déplacement x" << endl;
    cin  >> deplaceX;
    cout << "Entrez le déplacement y" << endl;
    cin  >> deplaceY;
    cout << "Entrez le déplacement z" << endl;
    cin  >> deplaceZ;

    a.deplacer(deplaceX, deplaceY, deplaceZ);
    cout << "a(" << a.getX() << "," << a.getY() << "," << a.getZ() << ") avec " << a.getM() << " déplacement sur x, y et z." << endl;

    return 0;
}
