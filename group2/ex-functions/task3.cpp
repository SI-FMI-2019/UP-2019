#include<iostream>
using namespace std;

int sum(int a, int b){
    int s = a + b;
    return s;

    //или за по-кратко(при по сложни операции би било лоша практика)
    return a+b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
}
