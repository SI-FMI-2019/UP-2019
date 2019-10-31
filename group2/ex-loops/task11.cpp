#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int spaces = n - i;

        while(spaces>0){
            cout<<" ";
            spaces--;
        }

        for(int j=0;j<i*2+1;j++)cout<<"*";
        cout<<endl;
    }
}
