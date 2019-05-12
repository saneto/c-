#include <iostream>
using namespace std;

int main()
{
int m=60,p=80;
int *ptr1, *ptr2;
ptr1=&p;
ptr2=&m;
*ptr1=*ptr2;
cout << p<<endl;
return 0;
}
