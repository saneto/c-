#include "CComRS232.h"

CComRS232::CComRS232(speed_t vit, cc_t min, cc_t time, int er, const char* trame, const char* chemin)
{
    int res1, res2;
    if(er==-1)     m_fd = open(chemin, O_WRONLY);
    else if(er==1) m_fd = open(chemin, O_RDONLY);
    else if(er==0) m_fd = open(chemin, O_RDWR);

    if (m_fd == -1) f_constr = false;
    else{
        res1 = tcgetattr(m_fd, &m_termiosI);
        m_termiosM = m_termiosI;

        //désactivés
        if(er == 1) m_termiosM.c_lflag &= ~CREAD;
        m_termiosM.c_lflag &= ~ECHOE;
        m_termiosM.c_lflag &= ~ISIG;
        m_termiosM.c_lflag &= ~ECHO;
        m_termiosM.c_oflag = 0;

        //activés
        m_termiosM.c_lflag |= ICANON;
        m_termiosM.c_cflag |= CLOCAL;
        m_termiosM.c_iflag |= IGNBRK;
        m_termiosM.c_iflag |= IGNPAR;
        m_termiosM.c_iflag |= PARMRK;
        m_termiosM.c_cflag |= HUPCL;
        m_termiosM.c_iflag |= INPCK;

        //cout << "Ordre supposé :\t !=-1\t !=-1\t 1\t 1" << endl;
        //cout << m_fd << "\t" << res1 << "\t" <<
        setVitesse(vit);
        // << "\t" <<
         setTrame(trame);
        // << endl;
        setTime(time);
        setMin(min);
        setER(er);

        res2 = tcsetattr(m_fd, TCSANOW, &m_termiosM);


        if ((res1 + res2)==0) f_constr = true;
        else f_constr = false;
    }
}

CComRS232::~CComRS232()
{
    /*tcsetattr(m_fd, TCSANOW, &m_termiosI);*/
    close(m_fd);
}

bool CComRS232::Emettre(const char* message, int taille)
{   return (write(m_fd, message, taille) == taille);    }

ssize_t CComRS232::Recevoir(char* message, int taille)
{   return read(m_fd, message, taille);                 }

bool CComRS232::ViderTampon(void)
{
    bool f_viderTampon;
    switch (m_ER)
    {
        case -1 :
            if((tcflush(m_fd, TCOFLUSH)) == 0)
                f_viderTampon = true;
            else f_viderTampon = false;
        case 1 :
            if((tcflush(m_fd, TCIFLUSH)) == 0)
                f_viderTampon = true;
            else f_viderTampon = false;
        case 0 :
            if((tcflush(m_fd, TCIOFLUSH)) == 0)
                f_viderTampon = true;
            else f_viderTampon = false;
        default :
            f_viderTampon = false;
    }

    return f_viderTampon;
}

/*********** SET ***********/

bool CComRS232::setTrame(const char* trame)
{
    bool f_setTrame;
    switch (trame[0])
    {
        case '5' :
            m_termiosM.c_cflag &= ~CSIZE;
            m_termiosM.c_cflag |= CS5;
            f_setTrame = true;
            break;
        case '6' :
            m_termiosM.c_cflag &= ~CSIZE;
            m_termiosM.c_cflag |= CS6;
            f_setTrame = true;
            break;
        case '7' :
            m_termiosM.c_cflag &= ~CSIZE;
            m_termiosM.c_cflag |= CS7;
            f_setTrame = true;
            break;
        case '8' :
            m_termiosM.c_cflag &= ~CSIZE;
            m_termiosM.c_cflag |= CS8;
            f_setTrame = true;
            break;
        default :
            f_setTrame = false;
            //cout << "trame[0]" << trame[0] << endl;
    }

    switch (trame[1])
    {
        case 'E' :
            m_termiosM.c_cflag |= PARENB;
            m_termiosM.c_cflag &= ~PARODD;
            f_setTrame = true;
            break;
        case 'O' :
            m_termiosM.c_cflag |= PARENB;
            m_termiosM.c_cflag |= PARODD;
            f_setTrame = true;
            break;
        case 'N' :
            m_termiosM.c_cflag &= ~PARENB;
            f_setTrame = true;
            break;
        default :
            f_setTrame = false;
            //cout << "trame[1]" << trame[1] << endl;
    }

    switch (trame[2])
    {
        case '1' :
            m_termiosM.c_cflag &= ~CSTOPB;
            f_setTrame = true;
            break;
        case '2' :
            m_termiosM.c_cflag |= CSTOPB;
            f_setTrame = true;
            break;
        default :
            f_setTrame = false;
            //cout << "trame[2]" << trame[2] << endl;
    }

    return f_setTrame;
}

bool CComRS232::setVitesse(speed_t vit)
{
    bool f_setVitesse = true;

    if (cfsetospeed(&m_termiosM, vit) == -1)
        f_setVitesse = false;

    if (cfsetispeed(&m_termiosM, vit) == -1)
        f_setVitesse = false;

    return f_setVitesse;
}

void CComRS232::setMin(cc_t min)
{   m_termiosM.c_cc[VMIN] = min;        }

void CComRS232::setTime(cc_t time)
{   m_termiosM.c_cc[VTIME] = time;      }

void CComRS232::setER(int er)
{   m_ER=er;                            }


/*********** GET ***********/

speed_t CComRS232::getVitesse (void)
{
    speed_t res;
    if(m_ER==1) res = m_termiosM.c_ospeed;
    else res = m_termiosM.c_ispeed;
    return res;
}

cc_t CComRS232::getMin (void)
{   return m_termiosM.c_cc[VMIN];       }

cc_t CComRS232::getTime (void)
{   return m_termiosM.c_cc[VTIME];      }

int CComRS232::getER (void)
{   return m_ER;                        }

char* CComRS232::getTrame (void)
{   return m_trame;                     }
