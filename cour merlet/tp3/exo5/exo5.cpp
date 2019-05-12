#include <iostream>

using namespace std;

int main()
{
    int i, longueur, largeur, a, reste, var1;
    char var;
    cout << unitbuf;
    cout << "*** tracè des contours d'un rectangle ***"<<endl;
    cout << "-->Veuillez saisir la longueur:"<<endl;
    cin >> longueur;
    cout<<"-->veuillez saisir la largeur:"<<endl;
    cin >>largeur;
    reste=0;
    var1=0;
    if(longueur<largeur)
        {
            cout<<"la longueur doit etre supérieure ou égale à la largeur"<<endl;
            return 0;
        }

    cout<<"--> Orientation du rectangle : horizontale ou verticale ? [h/v] :";
    cin>> var;
    if((var!='v') && (var!='h'))
       {
           cout<<"veuillez saisir h ou v"<< endl;
           return 0;
       }
    if('v'==var)
    {
        var1=longueur;
        longueur=largeur;
        largeur=var1;

    }
    for (i=1 ; i<=longueur ; i++)
    {
        if(i==1)
            {
            for (a=1 ; a<= largeur ; a++)
            {
                cout << "* ";
            }
            cout<<endl;
        }
        if((i>1) && (i<longueur))
        {
            cout<< "* ";
            reste=largeur-2;
            for (a=1 ; a<= reste ; a++)
            {
                cout<<"  ";
            }
            cout<< "*"<<endl;
        }
        if(i==longueur)
        {
            for (a=1 ; a<= largeur ; a++)
            {
                cout << "* ";
            }
            cout<<endl;
        }
    }
    return 0;
}
