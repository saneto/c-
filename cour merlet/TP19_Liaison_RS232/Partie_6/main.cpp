#include "CComRS232.h"
#define MAX 142


int main()
{

/*********** EMETTEUR ***********
    int i, l;
    bool etoile = false;
    char messageE[MAX];
    CComRS232 emetteur(B19200, 1, 0, -1, "8E1", "/dev/ttyUSB0");

    do{
        emetteur.ViderTampon();
        cout << "Saisissez le message à envoyer (140 caractères, * pour quitter le programme)" << endl;
        cin.getline(messageE, MAX);
        strcat(messageE, "$");
        l = strlen (messageE);
        emetteur.Emettre(messageE, l);
        for(i=0; i<l; i++) if(messageE[i] == '*') etoile=true;
    }while(!etoile);
*/

/*********** RECEPTEUR ***********
    cout << unitbuf;

    int nbrecu, i =0;
    char messageR[MAX];
    bool etoile = false;
    CComRS232 recepteur(B19200, 1, 0, 1, "8E1", "/dev/ttyUSB0");

    sleep(10);
    recepteur.ViderTampon();

    do{
        nbrecu = recepteur.Recevoir(messageR, MAX-1);
        messageR[nbrecu] = '\0';
        for(i=0; i<nbrecu; i++)
        {
            if((messageR[i] != '$' ) && (messageR[i] != '*'))
                cout << messageR[i];
            else if (messageR[i] == '$')
                cout << endl;
            else
                etoile = true;
        }
    }while(!etoile);

    cout << "--- Fin du message ---";
*/

/*********** RECEPTEUR + EMETTEUR ***********/
    char messageER[MAX];
    int i=1, l, nbrecu, c = EOF;
    bool etoile = false;
    CComRS232 recep_emet(B19200, 0, 0, 0, "8E1", "/dev/ttyUSB0");
    cout << "Les messages reçus sont précédés de \"R:\"" << endl
         << "Les messages envoyés sont précésés de \"E:\"" << endl;

    termios termiosI, termiosM;
    int fd = open("/dev/tty", O_RDONLY);
    int res = tcgetattr(fd, &termiosI);
    termiosM = termiosI;
    if( (fd != -1) && (res != -1) )
    {
        termiosM.c_lflag |= ICANON;
        tcsetattr(fd, TCSANOW, &termiosM);
    }
    else
    {
        cout << "Erreur";
    }
    do{

        c = getchar();
        cout << "recep";
        nbrecu = recep_emet.Recevoir(messageER, MAX-1);
        messageER[nbrecu] = '\0';
        for(i=0; i<nbrecu; i++)
        {
            if((messageER[i] != '$' ) && (messageER[i] != '*'))
                cout << messageER[i];
            else if (messageER[i] == '$')
                cout << endl;
            else
                etoile = true;
        }

        if(c != EOF)
        {
            cout << "emet";
            do{
                recep_emet.ViderTampon();
                cout << "Saisissez le message à envoyer (140 caractères, * pour quitter le programme)" << endl;
                cin.getline(messageER, MAX);
                strcat(messageER, "$");
                l = strlen (messageER);
                recep_emet.Emettre(messageER, l);
                for(i=0; i<l; i++) if(messageER[i] == '*') etoile=true;
            }while(!etoile);
            recep_emet.ViderTampon();
        }

    }while(!etoile);

    tcsetattr(fd, TCSANOW, &termiosI);
    return 0;
}
