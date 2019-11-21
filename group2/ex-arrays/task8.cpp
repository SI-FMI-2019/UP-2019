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

    bool bigger = true;

    for (int i=0; i<n-1; i++)
    {
        if (bigger){
            if (arr[i] < arr[i+1])
                swapEl(arr[i], arr[i+1]);
        }else{
            if (arr[i] > arr[i+1])
                swapEl(arr[i], arr[i+1]);
        }
        bigger = !bigger;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
