#include<iostream>

using namespace std;

int main(){
    int elNumber, sumRes = 0, multiRes = 1,
        maxNum = -1, minNum = -1;

    cout<<"Enter elements number: ";cin>> elNumber;

    int a;
    cout<<"Enter a number: "; cin>> a;

    maxNum = a;
    minNum = a;

    sumRes += a;
    multiRes *= a;

    for(int i=0; i<elNumber-1; i++){
        cout<<"Enter a number: "; cin>> a;

        if(maxNum < a) maxNum = a;
        if(minNum > a) minNum = a;

        sumRes += a;
        multiRes *= a;
    }

    cout<<"The sum of the numbers is: "<<sumRes<<endl;
    cout<<"The result of their multiplication is: "<<multiRes<<endl;
    cout<<"The average sum is: "<<sumRes/(elNumber*1.0) <<endl; // we have a hack here.. xD
    cout<<"The minimal number is: "<<minNum<<endl;
    cout<<"The maximal number is: "<<maxNum<<endl;
}
