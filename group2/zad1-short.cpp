//Prompt the user to enter 3 numbers and print them in decreasing order.
#include<iostream>

using namespace std;

int main(){
    int a,b,c;

    cin>>a>>b>>c;

    if(a<b)swap(a,b);
    if(a<c)swap(a,c);
    if(b<c)swap(b,c);

    cout<<a<<" "<<b<<" "<<c<<endl;
}
