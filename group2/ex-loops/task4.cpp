#include<iostream>

using namespace std;

int main(){
    int n;
    bool isSimple = true;
    cin>>n;

    for(int i=2;i<=n/2 && isSimple;i++)
        isSimple = (n%i!=0);

    if(isSimple)cout<<"The number is simple\n";
    else cout<<"The number is not simple\n";
}
