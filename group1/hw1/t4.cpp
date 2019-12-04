#include <iostream>
#include <limits>
int validate_input_number()
{
    int user_input = 0;
    std::cout << "Enter a number [1, 65535]";
    std::cin >> user_input;

    while(std::cin.fail() || user_input > 65535 || user_input < 1)
    {
        std::cout << "Input is invalid";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Enter a number [1, 65535]";
        std::cin >> user_input;
    }

    return user_input;
}
void wait()
{
    int some_big_number = 123651243;
    for(int i = 1; i < 100000000; i++)
    {
        for(int j = 1; j < 3; j++)
        {
            int temp = some_big_number / i;
            temp / j;
        }

    }
}

int main() {

    int user_input = validate_input_number();

    for(int i = 1; i <= user_input; i++)
    {
        std::cout << i << std::endl;
        wait();
    }

    return 0;
}