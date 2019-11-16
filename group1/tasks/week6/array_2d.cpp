#include <iostream>

using namespace std;

int main()
{
	int matrix[5][4];
	int counter = 1;
	
	for(int row = 0; row < 5; row++)
	{
		for(int col = 0; col < 4; col++)
		{
			matrix[row][col] = counter;
			counter++;
		}
	}

	for(int row = 0; row < 5; row++)
	{
		for(int col = 0; col < 4; col++)
		{
			cout << matrix[row][col] << " ";
		}
		cout << endl;
	}
	return 0;	
}