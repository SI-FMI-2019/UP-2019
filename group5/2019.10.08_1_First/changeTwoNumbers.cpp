#include <iostream>

using namespace std;

int main()
{
    // <type> name;
    int first;
    int second;
    int third;

    cout<<"Write first number"<<endl;
    cin>>first;
    cout<<"Write second number"<<endl;
    cin>>second;
    cout <<first<<" "<<second<< endl;
    third = first;
    first = second;
    second = third;
    cout << first<<" "<<second<< endl;
    return 0;
}
