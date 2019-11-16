#include <iostream>

using namespace std;

void add(int arr[], int number_to_add, int pos, size_t size_arr)
{
	for(int i = size_arr - 1; i > pos; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[pos] = number_to_add;
}

void remove(int arr[], int pos, size_t size_arr)
{
	for(int i = pos; i < size_arr - 1; i++)
	{
		arr[i] = arr[i+1];
	}
}

int search(int arr[], int item, size_t size_arr)
{
	for(int i = 0; i < size_arr; i++)
	{
		if(arr[i] == item)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[5] = {3, 4, -1, 2, 5};
	remove(arr, 2, 5);
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;	
}