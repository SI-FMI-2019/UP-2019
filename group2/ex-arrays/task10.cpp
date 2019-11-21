#include<iostream>
using namespace std;

int main(){
    int n,arr[100];

    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

    bool hasRepeat = false;
    int repeatNum = -1;

    for(int i=0;i<n-1 && !hasRepeat;i++){
        for(int j=i+1;j<n && !hasRepeat;j++){
            if(arr[i]!=arr[j])continue;
            repeatNum = arr[i];
            hasRepeat = true;
        }
    }

    cout<<repeatNum<<endl;
}
