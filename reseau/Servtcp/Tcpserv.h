#pragma once
#include <iostream>
#include <winsock2.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#pragma comment(lib, "Ws2_32.lib")
class Tcpserveur
{
    private:
            WSADATA WSAData;
            SOCKADDR_IN to;
            SOCKET sock;
    public :
        Tcpserveur(unsigned short port);
        void ServBind();
        void ServListen();
        void ServAccept();
        void ServSend(SOCKET serv);
        void ServRecv(SOCKET serv);
        ~Tcpserveur();
};
