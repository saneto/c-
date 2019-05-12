#include <iostream>

using namespace std;

int main()
{
    int badge, identifiant, Code, mdp;
    cout << "Bienvenu"<< endl;
    identifiant=1111122222;
    Code=1122;
    do
    {


        cout << "saisir votre identifiant"<<endl;
        cin >> badge;
        if(identifiant==badge)
        {

            cout<<"saisir votre code"<<endl;
            cin >> mdp;
            if(mdp==Code)
            {
                cout << "bonjour Mr.x passer une agreable journée"<<endl;
            }

        }
        else
        {
           cout<<"échec veuillez ";
        }
    }while(mdp!=Code);
    return 0;
}
