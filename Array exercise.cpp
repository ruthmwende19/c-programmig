//A 3D array to output values 9 and 14
#include <iostream>
using namespace std;
int main()
{
    //the array stores 18 values
    int a[2][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                    {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}};

    // printing array 
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                cout<<a[i][j][k]<<" ";
            }
        }
                {
        cout<<"\n a[0][2][2]=" <<a[0][2][2]<<endl; 
        cout<<"a[1][1][1]="<<a[1][1][1]<<endl;}
    }
    return 0;
}