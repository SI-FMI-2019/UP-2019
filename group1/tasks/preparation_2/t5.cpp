#include <iostream>

/*
 * Да се напише функция на C++, която приема като параметър едномерен масив от цели числа и връща като резултат
 * сумата на четните числа в него. Да се напише програма, която извиква написаната функция върху
 * три масива от цели числа (с едно число, с три числа и един избран от вас) и извежда на екрана резултатите за всеки от тях.
 */

bool is_even(int number)
{
    return number % 2 == 0; //Искаме да върнем отговора на (number % 2 == 0)
}

int sum_even_numbers(int array[], size_t size)
{
    int result = 0;

    for(int i = 0; i < size; i++)
    {
        if(is_even(array[i]))
        {
            result += array[i];
        }
    }

    return result;
}
int main() {

    int a[1] = {2};
    int b[3] = {3, 6, 4};
    int c[5] = {4, -4, 3, -3, 0};

    std::cout << sum_even_numbers(a, 1) << std::endl;
    std::cout << sum_even_numbers(b, 3) << std::endl;
    std::cout << sum_even_numbers(c, 5) << std::endl;
    return 0;
}
