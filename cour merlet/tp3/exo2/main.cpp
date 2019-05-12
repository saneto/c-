#include <iostream>

using namespace std;

int main()
{

         cout<<unitbuf;
         int a,s,i;
         for(i=1; i<=1000; i++)
         {
             s=0;
             for(a=i/2; a<=1; a--)
             {
                 if(i%a==0)
                 {
                     s=s+a;
                 }
             }
             if(i==s)
             {
                 cout <<"le nombre "<<i << " est parfait\n";
             }
         }

}
