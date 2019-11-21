#include<iostream>
using namespace std;

int main(){
    int n,k,arr[100];

    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
        arr[i] = arr[i] * k;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
