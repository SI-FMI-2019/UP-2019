#include<iostream>

using namespace std;

int main(){
    int n, sumDigits, multiDigits;
    cin>>n;

    for(int i=1;i<=n;i++){
        int num = i;
        sumDigits = 0;
        multiDigits = 1;
        while(num>0){
            sumDigits += num%10;
            multiDigits *= num%10;
            num/=10;
        }
        if(multiDigits == sumDigits) cout<< i <<endl;
    }
}
