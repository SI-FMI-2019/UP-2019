#include<iostream>
using namespace std;

int main(){
    int n;// size of array
    int arr[100];// define space for 100 integers

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(n == 0)return 0; // empty array

    int minEl, maxEl;
    minEl = maxEl = arr[0];// first element is min and max for itself

    for(int i=1;i<n;i++){
        if(minEl > arr[i])// new min element
            minEl = arr[i];

        if(maxEl < arr[i])// new max element
            maxEl = arr[i];
    }

    cout<<"min = "<<minEl<<endl;
    cout<<"max = "<<maxEl<<endl;
}
