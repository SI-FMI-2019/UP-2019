#include<iostream>
using namespace std;

// ��� �� ������� true/false, � ���������� �� ����, ���� ������� � �����, ��� ��
bool isEven(int num){
    if(num%2 == 0)return true;
    else return false;// ���� �� �� �� ���� else, ������ ��� if-� �� �������, ������� �� �������� ����

    // ��-������ ���, �� ������ ������
    //return num%2 == 0;
}

// ��� ���� ���������� �� �������� �����������
/**void isEven(int num){
    if(num%2 == 0)cout<<"is even"<<endl;
    else cout<<"is odd"<<endl;
}**/

int main(){
    if(isEven(4))cout<<"even";
    else cout<<"odd";
}

