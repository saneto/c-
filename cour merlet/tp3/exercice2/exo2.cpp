#include <iostream>

using namespace std;

int main()
{


         int a,s,i;
         for(i=1; i<=1000; i++)
         {
             s=0;
             for(a=i/2; i<=1; i--)
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
