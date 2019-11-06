#include<iostream>
using namespace std;

void multiPrint(int n,char ch){
    for(int i=0;i<n;i++)cout<<ch;
}

void buildSquare(int n){
    for(int i=0;i<n;i++){
        multiPrint(n,'*');
        multiPrint(1,'\n');
    }
    multiPrint(1,'\n');
}

void buildRectangle(int n,int m){
    for(int i=0;i<n;i++){
        multiPrint(m,'*');
        multiPrint(1,'\n');
    }
    multiPrint(1,'\n');
}

void buildTriangle1(int n){
    for(int i=0;i<n;i++){
        multiPrint(i+1,'*');
        multiPrint(1,'\n');
    }
    multiPrint(1,'\n');
}

void buildTriangle2(int n){
    for(int i=0;i<n;i++){
        multiPrint(n-i,' ');
        multiPrint(2*i+1,'*');
        multiPrint(1,'\n');
    }
    multiPrint(1,'\n');
}

int main(){
    buildSquare(3);
    buildRectangle(3,5);
    buildTriangle1(4);
    buildTriangle2(4);
}
