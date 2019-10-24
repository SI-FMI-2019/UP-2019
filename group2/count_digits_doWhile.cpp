#include <iostream>
using namespace std;

int main()
{
    int number, numOfDigits = 0;
    
    cin>>number;

    do{
        numOfDigits++;
        number/=10;
    }while(number>0);

    /*
    // bad prectice but legal solution

    do numOfDigits++;
    while(number>0 && (number/=10));
    */

    cout<<numOfDigits<<endl; 
}
