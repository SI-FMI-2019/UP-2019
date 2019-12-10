#include <iostream>

using namespace std;

int main()
{
//  Task 4 Matrix calculator
    int matrix1[10][10];
    int matrix2[10][10];
     for (int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>matrix1[i][j];


     for (int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>matrix2[i][j];
    int matrixSum [10][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixSum[i][j];
        }
        cout << endl;
    }
    return 0;
}
