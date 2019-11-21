#include<iostream>
using namespace std;

int main(){
    int n,k,sum=0,arr[100];

    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++){
        if(arr[i]%k == 0)
            sum = sum + arr[i];
    }

    cout<<"sum = "<<sum<<endl;
}
