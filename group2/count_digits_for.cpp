// not good practice for this kind of tasks
#include <iostream>
using namespace std;

int main()
{
    int number, numOfDigits = 0;
    
    cin>>number;
    
    for(;number>0;){
        number/=10;
        numOfDigits++;
    }
    
    // same as previous but shorter
    //for(numOfDigits=0;number>0;numOfDigits++)number/=10;

    cout<<numOfDigits<<endl;
}
