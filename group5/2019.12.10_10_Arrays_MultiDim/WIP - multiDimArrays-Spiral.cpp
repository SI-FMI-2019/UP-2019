#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n=0;
    int p=0;
    int size=3;
    int matrix[10][10];
    for (int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        cin>>matrix[i][j];


// ------>
    for(int j=0;j<size;j++)
    {
        cout<<matrix[0][j]<<"  ";
    }

    cout<<"\n";

// |
    for(int p=1;p<size-1;p++)
    {
        cout << setw(8);
        cout<<matrix[p][size-1]<<"\n";
    }

    // <------
     for(int j=0 ;j <size;j++)
    {
        cout<<matrix[size-1][j]<<"  ";
    }
    cout<<"\n";


//  Task 2
//    for(int i=0;i<n;i++)
//        {
//            for(int p=0;p<i;p++)
//            {
//                cout<<setw(4)<<" ";
//            }
//            for(int j=i;j<n;j++)
//            {
//
//                cout<<setw(4)<<matrix[i][j];
//            }
//                cout<<"\n";
//        }



//    Task 1
//     for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//        {
//            cout<<matrix[i][j]<<"  ";
//        }
//        cout<<"\n";
//     }




    return 0;
}

