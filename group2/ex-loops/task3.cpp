#include<iostream>

using namespace std;

int main(){
    double sum=1;
    int n, fact =1, x;

    cout<<"Enter X: ";cin>>x;
    cout<<"Enter N: ";cin>>n;

    for(int i=1;i<=n;i++){
        fact*=i;
        sum += (x*1)/fact;
    }

    cout<<"sum = "<<sum<<endl;
}
