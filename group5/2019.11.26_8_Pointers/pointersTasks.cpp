#include <iostream>

using namespace std;

//void changeNumbers(int &a, int &b)
//{
//    cout<<&a<< " "<< &b<<endl;
//    int c;
//    c=a;
//    a=b;
//    b=c;
//}

int main()
{
// task 1
//    int a,b;
//    cin>>a>>b;
//    changeNumbers(a,b);
//    cout<<"Number A is: "<< a<< endl<< "Number B is: "<< b<<endl;
//    cout<<&a<< " "<< &b<<endl;

  // Task 2
  int arr[5];
  int sum=0;
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }

  int *ptXstart=arr;
  int *ptXend = arr+4;
  for(int *i=ptXstart;i<=ptXend;i++)
  {
     sum+=*i;
  }
  cout<<sum;
}

