#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char tab[81];
    char al[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int f, i, t;

    cout << "ligne\n";
    i=0;
    t=0;
    cin.getline(tab,81);
    do
    {
        f=tab[i];

         if(f!='\0')
            {
               for(t=0; t<=25; t++)
               {

                    if(f==al[t])
                    {
                        if((f!='z')&&(f!='y'))
                        {
                            tab[i]+=2;
                        }

                        if(f=='y')
                        {
                           tab[i]=al[0];
                        }
                        else if(f=='z')
                        {
                            tab[i]=al[1];
                        }
                    }
               }
           }
        cout<<tab[i]<<endl;
        i++;
    }while(tab[i]!='\0');
     cout<<tab<<endl;
    return 0;
}
