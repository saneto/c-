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
		char *mess="ferme la\n";
		int sock;
		if((sock = socket ( AF_INET , SOCK_STREAM , 0)) == -1 )
		{
			perror("erreur -1");
		}
		sockaddr_in to;
        to.sin_family = AF_INET;
		to.sin_addr.s_addr = inet_addr ("127.0.0.1");
		to.sin_port = htons(2226);
        if (connect( sock ,(struct sockaddr*)& to , sizeof(to)) == -1 )
		{
			perror("erreur -2");
		}
		if (send( sock ,mess, strlen(mess),0) == -1 )
		{
			perror("erreur -3");
		}
		close(sock);

}
