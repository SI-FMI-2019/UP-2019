#include<iostream>

using namespace std;

int main(){
    cout<<"permutations with repetition\n";
    for(int i=1;i<=3;i++)
        for(int j=1;j<=3;j++)
            for(int k=1;k<=3;k++)
                cout<<i<<j<<k<<endl;

    cout<<"permutations without repetition\n";
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(i == j)continue;
            for(int k=1;k<=3;k++){
                if(i == j || i == k || j == k)continue;
                cout<<i<<j<<k<<endl;
            }
        }
    }
}
