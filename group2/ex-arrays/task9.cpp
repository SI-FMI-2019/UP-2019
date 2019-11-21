#include<iostream>
using namespace std;

/** swap function
*   here the arguments are references because we want to change this values where they are called
*/
void swapEl(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n,arr[100];

    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

    int left_num = 0, right_num = n-1;
    while (left_num < right_num)
    {
        while (arr[left_num]%2 == 0 && left_num < right_num)
            left_num++;

        while (arr[right_num]%2 == 1 && left_num < right_num)
            right_num--;

        if (left_num < right_num)
        {
            swapEl(arr[left_num], arr[right_num]);
            left_num++;
            right_num--;
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
