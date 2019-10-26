#include <iostream>

using namespace std;

const int THRESHOLDGRADE = 5.36;
const int THRESHOLDDIPLOM = 5.23;

int main()
{
    double grade;
    bool diplom;
    double gradeDiplom;
    bool amIinSI;
    cout<<"Your grade"<<endl;
    cin>>grade;
    cout<<"Do you have diplom?"<<endl;
    cin>>diplom;
    cout<<"Grade from diplom"<<endl;
    cin>>gradeDiplom;
    amIinSI = (grade > THRESHOLDGRADE) && diplom && (gradeDiplom >THRESHOLDDIPLOM) ;
    cout << "Will you study SE? "<<amIinSI << endl;
    return 0;
}
