#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char tab[28];
    int i, t;
    cout << "verbe\n";
    cin >> setw(27)>> tab;
     while(tab[t]!='\0')
    {
        t=t+1;
    }
    for(i=0; i<=t-1; i++)
    {
        if((tab[i]=='e')&&(tab[i+1]=='r'))
        {
            for(i=0;i<=5; i++)
            {
                if(i==0)
                {
                    tab[t-2]='e';
                    tab[t-1]='\0';
                    cout << "je "<<tab<< endl;
                }
                 if(i==1)
                {
                    tab[t-2]='e';
                    tab[t-1]='s';
                    cout << "tu "<<tab<< endl;
                }
                 if(i==2)
                {
                    tab[t-2]='e';
                    tab[t-1]='\0';
                    cout << "il "<<tab<< endl;
                }
                 if(i==3)
                {
                    tab[t-2]='o';
                    tab[t-1]='n';
                    tab[t]='s';
                    cout << "nous "<<tab<< endl;
                }
                 if(i==4)
                {
                    tab[t-2]='e';
                    tab[t-1]='z';
                    tab[t]='\0';
                    cout << "vous "<<tab<< endl;
                }
                 if(i==5)
                {
                    tab[t-2]='e';
                    tab[t-1]='n';
                    tab[t]='t';
                    cout << "ils "<<tab<< endl;
                }
            }
        }

    }
    return 0;
}
