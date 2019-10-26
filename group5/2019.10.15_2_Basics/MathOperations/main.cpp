#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double myNumber;
    cout<<"Enter number "<<endl;
    cin>>myNumber;
    int powNumberBy2 = pow(myNumber, 2 );
    int powNumberBy10 = pow(myNumber, 10 );
    int squared = sqrt(myNumber);
    double logNumber = log(myNumber);
    double expNumber = exp(myNumber);
//    int absoluteNumber = abs(myNumber);
    int nextNumber = ceil(myNumber);

    int secondNumber;

    cout << "Powed number by 2 is "<< powNumberBy2 << endl;
    cout << "Powed number by 10 is "<< powNumberBy10 << endl;
    cout << "Squared number is "<< squared << endl;
    cout << "Log number is "<< logNumber << endl;
    cout << "Exp pow by number is "<< expNumber << endl;
//    cout << "Absolute value of number is "<< absoluteNumber << endl;
    cout << "Round up number is "<< nextNumber << endl;


    cout<<"Enter second number "<<endl;
    cin>>secondNumber;
    bool isFirstBigger= myNumber > secondNumber;
    cout<<"First number is bigger than second number "<<isFirstBigger<< endl;
    return 0;
}
