#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int sum = 0;
        for(int j=1;j<=i/2;j++){
            if(i%j!=0)continue;
            sum += j;
        }
        if(i == sum) cout<< i <<endl;
    }
}
