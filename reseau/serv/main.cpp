#include <iostream>
#include <winsock2.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#pragma comment(lib, "Ws2_32.lib")
using namespace std;

int main()
{
    WSADATA WSAData;
    int iResult=WSAStartup(MAKEWORD(2,0), &WSAData);
	bool t=false;
	SOCKET sock;
	SOCKET serv;
	int taille;
	char m[50]="\0";
	char message[30]="ok\0";
	int lo;
	SOCKADDR_IN to;
    if (iResult != NO_ERROR) {
        wprintf(L"WSAStartup failed with error: %ld\n", iResult);
        return 1;
    }

	if((sock = socket ( AF_INET, SOCK_STREAM , IPPROTO_TCP)) == -1 )
	{
		perror("erreur -1");
	}
	to.sin_family = AF_INET;
	to.sin_addr.s_addr = htonl ( INADDR_LOOPBACK );
	to.sin_port = htons(6000);

	if(( bind ( sock ,(SOCKADDR *)& to , sizeof(to))) == -1 )
	{
		perror("erreur -2");
	}
    if(listen(sock,1)==-1)
    {
                perror("erreur -3");
    }
    do{
                if((serv=accept(sock ,NULL,NULL )) == -1 )
                {
                    perror("erreur -4");
                }
                if((lo=recv(serv ,m,50,0 )) == -1 )
                {
                    perror("erreur -5");
                }
                cout<<m<<endl;

                /*if (send(serv ,message, strlen(message),0) == -1 )
                {
                    perror("erreur -3");
                }*/
                //closesocket(serv);
    }while(t==false);
    closesocket(sock);
    WSACleanup();
    return 0;
}
