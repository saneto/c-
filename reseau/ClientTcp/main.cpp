#include <iostream>
#include "ClientTcp.h"
using namespace std;

int main()
{
    TcpClient*C=new TcpClient(5000,"127.0.0.1");
    cout << "Hello world!" << endl;
    return 0;
}
