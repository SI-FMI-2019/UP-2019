#include <iostream>

using namespace std;


int main()
{

//  Task 8
//  int myArray[5];
//  for(int i=0;i<5;i++)
//  {
//      cin>>myArray[i];
//  }
//   for(int z=0;z<5;z++)
//   {
//       for(int p=0;p<4-z;p++)
//       {
//           if(myArray[p]>myArray[p+1])
//           {
//               swap(myArray[p],myArray[p+1]);
//
//           }
//       }
//
//   }
//   for(int i=0;i<5;i++)
//  {
//      cout<<myArray[i];
//  }


// Task 9

    int end;
    int ar[10];
    int sizee=0,len=1,maxLen=0;
    cin>>sizee;
    for(int i=0;i<sizee;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<sizee-1;i++)
    {
        if(ar[i]<=ar[i+1])
            len++;
        else
        {
        if(maxLen<len)
        {
            end = i + 1;
            maxLen=len;
        }
        len=1;
        }
    }
    if(maxLen<len)
    {
        maxLen=len;
        end = sizee;
    }
    cout<<maxLen<< endl;
    cout<<"Last element "<<end<< endl;
    for(int i = end - maxLen; i < end; i++)
    {

        cout<<ar[i]<< " ";
    }
}





