#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    /*
    1 ouvrir le fichier associé au port série virtuel
    2 configurer la voie de communication entre le système et le port série conformément aux
        informations indiquées ci-dessus;
    3 demander à l'utilisateur de saisir les messages à envoyer, et les transmettre jusqu'à ce que
        l'utilisateur saisisse un mot ou un caractère (à choisir) qui indique qu'il souhaite quitter le
        programme;
    4 fermer le fichier associé au port série virtuel.
    */

    //1
    int fd, res;
    char caractere = '0';

    struct termios termiosI, termiosM;
    fd = open("/dev/ttyUSB0",O_WRONLY); /* ouverture en lecture seule : récepteur */
    if (fd == -1)
    {   /* Ne pas oublier de tester si l'ouverture a réussi */
        printf ("Erreur d’ouverture!\n");
    }


    //2
    res = tcgetattr(fd, &termiosI);         /* Récupération dans la variable termiosI des paramètres
                                               de la voie de communication entre le système et le port
                                               série associé au descripteur fd */
    if (res == -1)
    {   /* Ne pas oublier de tester si l'appel de la fonction a réussi*/
        printf ("Pb d'accès en consultation aux paramètres de la voie de communication!\n");
    }

    termiosM = termiosI;

    //8
    termiosM.c_cflag &= ~CSIZE;
    termiosM.c_cflag |= CS8;
    //8E
    termiosM.c_cflag |= PARENB;
    termiosM.c_cflag &= ~PARODD;
    //8E1
    termiosM.c_cflag &= ~CSTOPB;

    //désactivés
    termiosM.c_lflag &= ~ICANON;
    termiosM.c_lflag &= ~ISIG;
    termiosM.c_lflag &= ~ECHOE;
    termiosM.c_lflag &= ~ECHO;
    termiosM.c_lflag &= ~CREAD;

    //activés
    termiosM.c_cflag |= HUPCL;
    termiosM.c_cflag |= CLOCAL;
    termiosM.c_iflag |= IGNBRK;
    termiosM.c_iflag |= IGNPAR;
    termiosM.c_iflag |= INPCK;
    termiosM.c_iflag |= PARMRK;

    termiosM.c_oflag = 0;
    termiosM.c_cc[VMIN] = 1;
    termiosM.c_cc[VTIME] = 0;

    res = cfsetospeed(&termiosM, B19200);
    if (res == -1)
    {
        printf ("Pb lors de la modification de la vitesse d'entrée!\n");
    }
    res = cfsetispeed(&termiosM, B19200);
    if (res == -1)
    {
        printf ("Pb lors de la modification de la vitesse d'entrée!\n");
    }

    res = tcsetattr(fd, TCSANOW, &termiosM);/* Installation des nouveaux paramètres de la voie de communication entre le système et le
                                               port série */
    if (res == -1)
    {   /* Ne pas oublier de tester si l'appel de la fonction a réussi*/
        printf ("Pb lors de l'installation des nouveaux paramètres de la voie de communication!\n");
    }

    /* Utilisation du port série [read(fd); write(fd, ..);] ) */
    printf("Saisissez le message à envoyer ('$' pour quitter) :");
    while (caractere != '$')
    {
        scanf("%c", &caractere);
        write(fd, &caractere, 1);
    }


    res = tcsetattr(fd, TCSANOW, &termiosI);/* A la fin du programme, réinstallation des paramètres initiaux de la voie de communication
                                               entre le système et le port série */
    if (res == -1)
    {   /* Ne pas oublier de tester si l'appel de la fonction a réussi*/
        printf ("Pb lors de la réinstallation des paramètres initiaux!\n");
    }



    return 0;
}
