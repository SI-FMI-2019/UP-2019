#include <iostream>
using namespace std;

int main()
{
    int number, numOfDigits = 0;
    
    cin>>number;
    
    while(number>0){
        number/=10;
        numOfDigits++;
    }

    cout<<numOfDigits<<endl;
}
