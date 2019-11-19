#include <iostream>

using namespace std;

// Task 1
//int findMin(int arraySize, int myArr[100])
//{
//    for(int i=0;i<arraySize;i++)
//    {
//        cin>>myArr[i];
//    }
//    int myMin=myArr[0];
//    for(int i=1;i<arraySize;i++)
//    {
//        if(myArr[i]<myMin) myMin=myArr[i];
//    }
//    cout<<myMin;
//    return myMin;
//}

// Task 5
//int arraySortedOrNot(int arr[], int n)
//{
//    if (n == 1|| n ==0)
//        return 1;
//    if (arr[n -1] < arr[n - 2])
//        return 0;
//
//    return arraySortedOrNot(arr, n - 1);
//}

int main()
{

// 7 task
//    int sizee=0,j,counter1=0;
//    cout<<"enter size";
//    cin>>sizee;
//    int myArray[sizee];
//
//for(int i=0;i<sizee;i++)
//    {
//        cout<<"arr["<<i<<"]=";
//        cin>>myArray[i];
//        cout<<endl;
//    }
//
//for(int i=0;i<(sizee/2);i++)
//{
//
//        if(myArray[i]==myArray[sizee-1-i]) counter1++;
//
//
//}
//   if(counter1==(sizee/2))cout<<"yes";
//   else cout<<"no";

// 6 task
//    int sizee=0;
//    cin>>sizee;
//
//    int myArray[sizee];
//    int myArray1[sizee];
//    int sum=0;
//
//    for(int i=0;i<sizee;i++)
//        {
//        cin>>myArray[i];
//    }
//    for(int i=0;i<sizee;i++)
//        {
//        cin>>myArray1[i];
//    }
//    for(int i=0;i<sizee;i++){
//            sum=sum+myArray[i]*myArray1[i];
//
//    }
//    cout<<sum<<endl;

//int SizeOfArray=0;
//cin >> SizeOfArray;
//int SumOfArray=0;
//int MyArray[SizeOfArray];
//for (int i=0; i<SizeOfArray; i++)
//{
//    cin>>MyArray[i];
//    SumOfArray+=MyArray[i];
//}
//cout<< SumOfArray;

//  task 3
//    int sizeOfArray;
//    int temp, i;
//
//    cin >> sizeOfArray;
//    int myArray[sizeOfArray];
//
//    for(i = 0; i < sizeOfArray; i++) {
//        cin >> myArray[i];
//    }
//
//    for(int k = i - 1, i = 0; i < k; i++, k--) {
//        temp = myArray[i];
//        myArray[i] = myArray[k];
//        myArray[k] = temp;
//    }
//
//    cout << "Reversed numbers are: ";
//    for(int p = 0; p < sizeOfArray; p++) {
//        cout << myArray[p] << " ";
//    }


// 4 task
//    int siz;
//    int numm;
//    int counter=0;
//    cin>>siz;
//    cin>>numm;
//    int arr[siz];
//    for(int i=0;i<siz;i++)
//    {
//        cin>>arr[i];
//        if(numm==arr[i])
//        {
//            counter++;
//        }
//
//    }
//    if(counter>0)
//    {
//        cout<<"Yes it is included."<<endl;
//    }
//    cout<<counter;

// 5 task
//    int arr[] = {1, 3, 6 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    if (arraySortedOrNot(arr, n))
//        cout << "yes\n";
//    else
//        cout << "no\n";


    return 0;
}
