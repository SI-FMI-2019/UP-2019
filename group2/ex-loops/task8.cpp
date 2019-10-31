#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    // Evklid with subtraction
    while (a != b) {
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        a -= b;
    }

    // Evklid with division
    /*while (b != 0) {
        a %= b;
        int temp = a;
        a = b;
        b = temp;
    }*/

    cout<<"NOD = "<<a<<endl;


}
