#include <iostream>
#include <stdlib.h>
#include <termios.h>
#include <fcntl.h>
using namespace std;

int main()
{
    char mdp[11];

    cout << "--Méthode 1 : appels système--" << endl
         << "Entrez le mot de passe : "      << endl;

    system("stty -echo");
    cin  >> mdp;
    system("stty echo");

    cout << "--Le mot de passe a été saisi--" << endl
         << mdp << endl << endl << endl;


    cout << "--Méthode 2 : changer termios--" << endl;

    termios termiosI, termiosM;
    int fd = open("/dev/tty", O_RDONLY);
    int res = tcgetattr(fd, &termiosI);
    termiosM = termiosI;
    if( (fd != -1) && (res != -1) )
    {
        cout << "Entrez le mot de passe : " << endl;

        termiosM.c_lflag &= ~ECHO;
        tcsetattr(fd, TCSANOW, &termiosM);
        cin  >> mdp;
        tcsetattr(fd, TCSANOW, &termiosI);

        cout << "--Le mot de passe a été saisi--" << endl
             << mdp << endl << endl << endl;
    }
    else
    {
        cout << "Erreur";
    }

    return 0;
}
