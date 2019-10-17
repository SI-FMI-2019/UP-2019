// Prompt the user to enter 3 numbers and print them in decreasing order.
#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<a<<" ";
        if(b>c) cout<<b<<" "<<c<<endl;
        else cout<<c<<" "<<b<<endl;
    }

    if(b>a && b>c){
        cout<<c<<" ";
        if(a>c) cout<<a<<" "<<c<<endl;
        else cout<<c<<" "<<a<<endl;
    }

     if(c>b && c>a){
        cout<<c<<" ";
        if(b>a) cout<<b<<" "<<a<<endl;
        else cout<<a<<" "<<b<<endl;
    }
}
