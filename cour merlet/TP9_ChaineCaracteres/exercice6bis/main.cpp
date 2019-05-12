#include <iostream>		/*on inclut le fichier <iostream> qui contient les declarations
						necessaires à l'utilisation des entrées sorties standard*/

#include <string.h> // contient la déclaration de la fonction strcpy()

using namespace std;	// on utilise les symboles definis dans l'espace de noms std


int main()
{
    char pronom[6][50]={{'j','e',' ', '\0'},
                        {'t','u',' ', '\0'},
                        {'i','l',' ', '\0'},
                        {'n','o','u','s',' ','\0'},
                        {'v','o','u','s',' ','\0'},
                        {'i','l','s',' ','\0'}};
    char term [6][15] ={{'e',' ','\0'},
                        {'e','s',' ','\0'},
                        {'e',' ','\0'},
                        {'o','n','s',' ','\0'},
                        {'e','z',' ','\0'},
                        {'e','n','t',' ','\0'}};
    char  verbe[35];
    char aff[35];
    int v, i;
    size_t taille;
    cout << "saisir votre verbe"<<endl;
    cin >> verbe;
    taille = strlen(verbe);
    v=taille;
	i=0;
    if((verbe[v-2]=='e')&&(verbe[v-1]=='r'))
    {
        for(i=0;i<=5; i++)
        {
            verbe[v-2]='\0';
            strcat(aff, pronom[i]);
            strcat(aff, verbe);
            strcat(aff, term[i]);
            cout << aff<< endl;
            aff[0]='\0';
        }
    }
	return 0;
}
