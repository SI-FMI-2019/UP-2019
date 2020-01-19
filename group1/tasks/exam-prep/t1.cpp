#include <iostream>
#include "t1.hpp"

int main()
{
    int arr1[5] = {3, 5, 7, 9, 11};
    int arr2[5] = {2, 4, 6, 8, 10};

    int* arr3 = create_array(arr1, 5, arr2, 5);

    for(int i = 0; i < 10; i++)
    {
        std::cout << arr3[i] << " ";
    }

    delete[] arr3;
    return 0;
}