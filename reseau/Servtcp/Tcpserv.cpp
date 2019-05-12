#include "Tcpserv.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
Tcpserveur::Tcpserveur(unsigned short port)
{
    int iResult=WSAStartup(MAKEWORD(2,0), &WSAData);
    to.sin_family = AF_INET;
	to.sin_addr.s_addr = htonl ( INADDR_ANY );
	to.sin_port = htons(port);
	if (iResult != NO_ERROR)
    {
        perror("erreur");
    }
	if((sock = socket ( AF_INET, SOCK_STREAM , IPPROTO_TCP)) == -1 )
	{
		perror("erreur -1");
	}
	this->ServBind();
}
void Tcpserveur::ServBind()
{
    if(( bind ( sock ,(SOCKADDR *)& to , sizeof(to))) == -1 )
	{
		perror("erreur -2");
	}
	this->ServListen();
}
void Tcpserveur::ServListen()
{
     if(listen(sock,3)==-1)
    {
                perror("erreur -3");
    }
    this->ServAccept();
}
void Tcpserveur::ServAccept()
{
    SOCKET serv;
    bool t=true;
    do{
        if((serv=accept(sock ,NULL,NULL )) == -1 )
            {
                perror("erreur -4");
            }
        this->ServRecv(serv);
        this->ServSend(serv);
           closesocket(serv);
    }while(t);
}
void Tcpserveur::ServSend(SOCKET serv)
{
    char message[10]="ok\0";
     if (send(serv ,message, strlen(message),0) == -1 )
                {
                    perror("erreur -3");
                }
}
void Tcpserveur::ServRecv(SOCKET serv)
{
    int lo;
    char * pch;
    char m[50]="\0";
    if((lo=recv(serv ,m,50,0 )) == -1 )
                {
                    perror("erreur -5");
                }
  pch = strtok (m,"%");
  while (pch != NULL)
  {
    printf ("%s ",pch);
    pch = strtok (NULL, "%");
  }
  cout<<endl;
}
Tcpserveur::~Tcpserveur()
{
    closesocket(sock);
    WSACleanup();
}
