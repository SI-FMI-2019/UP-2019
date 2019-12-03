#include <iostream>
using namespace std;

int findSum(int* start, int * end)
{
    int acc = 0;
    for (;start != end; start++)
        acc += *start;
    return acc;
}

int main()
{
   int arr[] ={10,20,30,40,50};
   cout<<findSum(arr, arr + sizeof(arr) / sizeof(int));


    return 0;
}
