#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int BLAH=32;
    const double LQLQ=1.8;
    int farenheit;
    cin>>farenheit;
    double celsius = (farenheit-BLAH)/LQLQ;
    cout<<setprecision(2)<<fixed<<celsius;
    return 0;
}
