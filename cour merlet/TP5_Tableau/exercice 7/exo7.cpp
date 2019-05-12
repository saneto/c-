#include <iostream>

using namespace std;

int main()
{
    int mat[3] [4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int mat1[3] [4] = {2,4,6,8,10,12,14,16,18,20,22,24};
    int mat2;
    int i, a;
    for (i=0 ; i<=2 ; i++)
    {
        for(a=0 ; a<=3 ; a++)
        {
            cout<< mat[i][a]<< " "<< mat1[i][a] << " ";
        }
        cout<< endl;
    }
    for (i=0 ; i<=2 ; i++)
    {
        for(a=0 ; a<=3 ; a++)
        {
            mat2=mat[i][a]+mat1[i][a];
            cout<< mat2 << " ";
        }
        cout<< endl;
    }

return 0;
}

