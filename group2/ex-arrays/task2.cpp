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

/** input function
*  arr is pointer to the first element of an array
*  n is reference to an element from the main function
**/
void input(int *arr, int &n){
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
}
/** output function
*  arr is pointer to the first element of an array
**/
void output(int *arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void bubleSort(int *arr, int n){
    int i,j;

    for(i=0;i<n;i++){// goes trought all array elements
        for(j=i+1;j<n;j++){// goes trought all array elements starting from the current element
            if(arr[i]<arr[j])continue;
            swapEl(arr[i],arr[j]);//  if current element is bigger than its next siblings it would be swapped
        }
    }
}

int main(){
    int arr[100], n;

    input(arr,n);

    bubleSort(arr,n);

    output(arr,n);
}
