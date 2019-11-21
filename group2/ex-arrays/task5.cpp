#include<iostream>
using namespace std;

int main(){
    int n,br =0,// br is the number of numbers between 9 and 100
        sum=0,arr[100];

    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++){
        if(arr[i]>9 && arr[i] < 100){
            sum = sum + arr[i];
            br++;
        }
    }

    cout<<sum/br<<endl;
}
