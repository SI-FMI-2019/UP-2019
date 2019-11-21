#include<iostream>
using namespace std;

int main(){
    int n,sum=0,arr[100];

    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
        sum = sum + arr[i];

    cout<<"sum = "<<sum<<endl;
}
