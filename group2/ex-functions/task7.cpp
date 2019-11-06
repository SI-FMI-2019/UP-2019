#include<iostream>
using namespace std;

void fib(int n){
    int fib1 = -1,//  за да може редицата да започне от 0
        fib2 = 1;
    for(int i=0;i<n;i++){
        int s = fib1 + fib2;
        cout<< s << " ";
        fib1 = fib2;
        fib2 = s;
    }
    cout<<endl;
}

int main(){
    fib(10);
}
