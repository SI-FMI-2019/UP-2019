#include <iostream>

/*
 * Да се напише функция, която връща като резултат най-голямото число в предаден като параметър масив от естествени числа.
 * Да се напише програма, която използва написаната функция, за да въведе от
 * конзолата масив от цели числа и да изведе най-голямото от тях.
*/

int get_biggest_number(int* array, size_t size)
{
    //Приемаме, че първото число е най-голямото към момента. Сравняваме всяко следващо с него.
    //Ако е по-голямо, то става новото най-голямо число.
    int max = array[0];

    for(int i = 1; i < size; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }

    return max;
}
int main() {

    int n = 0;
    std::cin >> n;

    int* numbers = new int[n];

    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    int result = get_biggest_number(numbers, n);
    std::cout << result << std::endl;

    delete[] numbers;
    return 0;
}
