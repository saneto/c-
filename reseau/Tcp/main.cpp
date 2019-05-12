#include <iostream>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	bool t=false;
	int sock;
	int serv;
	unsigned int taille;
	unsigned short port=2226;
	char m[50];
	char message[30]="bien reçu\n";
	int lo;
	sockaddr_in to;
	if((sock = socket ( AF_INET, SOCK_STREAM , 0)) == -1 )
	{
		perror("erreur -1");
	}
	to.sin_family = AF_INET;
	to.sin_addr.s_addr = htonl(INADDR_ANY);
	to.sin_port = htons(port);
	if(( bind ( sock ,(struct sockaddr*)& to , sizeof(to))) == -1 )
	{
		perror("erreur -2");
	}
    if(listen(sock,50)==-1)
    {
                perror("erreur -3");
    }
    do{
                taille=sizeof(to);
                if((serv=accept(sock ,(struct sockaddr*)& to ,&taille )) == -1 )
                {
                    perror("erreur -4");
                }
                if((lo=recv(serv ,m,50,0 )) == -1 )
                {
                    perror("erreur -5");
                }
                cout<<m<<inet_ntoa(to.sin_addr)<<endl;

                if (send(serv ,message, strlen(message),0) == -1 )
                {
                    perror("erreur -3");
                }
                close(serv);
    }while(t==false);
    close(sock);
    return 0;
}
