#include <iostream>

void input(int** matrix, size_t size)
{
    for(int row = 0; row < size; row++)
    {
        for(int column = 0; column < size; column++)
        {
            std::cin >> matrix[row][column];
        }
    }
}

int sum_of_diagonal(int** matrix, size_t size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }
    return sum;
}
int sum_of_reverse_diagonal(int** matrix, size_t size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += matrix[i][size - 1 - i];
    }
    return sum;
}
int main()
{
    int n = 0;
    std::cin >> n;

    int** matrix;

    matrix = new int*[n];

    for(int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }

    input(matrix, n);
    std::cout << sum_of_diagonal(matrix, n) << " " << sum_of_reverse_diagonal(matrix, n) << std::endl;

    for(int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}"