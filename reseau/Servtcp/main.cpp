#include <iostream>
#include"Tcpserv.h"
using namespace std;

int main()
{
    Tcpserveur* t=new Tcpserveur(5000);
    cout << "Hello world!" << endl;
    return 0;
}
