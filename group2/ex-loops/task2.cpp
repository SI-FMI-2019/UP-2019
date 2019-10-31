#include<iostream>

using namespace std;

int main(){
    int n, step, powN =1, i =0;

    cout<<"Enter a number: ";cin>>n;
    cout<<"Enter a degree: ";cin>>step;

    while(i<step){
        powN *= n;
        i++;
    }

    cout<<n<<"^"<<step<<" = "<<powN<<endl;
}
