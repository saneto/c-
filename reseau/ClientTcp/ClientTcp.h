#pragma once
#include <iostream>
#include <winsock2.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#pragma comment(lib, "Ws2_32.lib")
class TcpClient
{
      private:
            WSADATA WSAData;
            SOCKADDR_IN to;
            SOCKET sock;
    public :
        TcpClient(unsigned short port,const char* Ip);
        void ServConnect();
        void ServSend();
        void ServRecv();
        ~TcpClient();
};
