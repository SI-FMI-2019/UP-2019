#include<iostream>

using namespace std;

int main(){
    bool isGrowing = true;
    bool isDecreasing = true;
    int n,prev,next;

    cin>>n;

    cin>>prev;
    for(int i=0;i<n-1;i++){
        cin>>next;

        isGrowing = (next>prev && isGrowing);
        isDecreasing = (next<prev && isDecreasing);

        prev = next;
    }

    if(isGrowing) cout<<"Is growing\n";
    else if(isDecreasing) cout<<"Is decreasing\n";
    else cout<<"Is unsorted\n";
}
