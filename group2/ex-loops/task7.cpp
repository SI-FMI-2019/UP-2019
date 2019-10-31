#include<iostream>

using namespace std;

int main(){
    int n, sumRes = 0, rotateNum = 0;

    cout<<"Enter a number: "; cin>> n;

    while(n>0){
        int digit = n%10;

        sumRes+=digit;

        rotateNum = rotateNum*10 + digit;

        cout<<digit<<" ";

        n/=10;
    }
    cout<<endl;
    cout<<"Sum of digits = "<< sumRes<<endl;
    cout<<"Rotate number is: "<<rotateNum<<endl;
}
