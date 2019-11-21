#include<iostream>
using namespace std;

/** swap function
*   here the arguments are references because we want to change this values where they are called
*/
void swapEl(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n,arr[100];

    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n/2;i++)
        swapEl(arr[i],arr[n-i-1]);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
