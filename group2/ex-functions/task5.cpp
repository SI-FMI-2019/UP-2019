#include<iostream>
using namespace std;

int reverseNum(int num){
    int reverseNumber = 0;

    while(num>0){
        reverseNumber = reverseNumber*10 + num%10;
        num = num/10;
    }
    return reverseNumber;
}

int main(){
    cout<<reverseNum(123)<<endl;
}
