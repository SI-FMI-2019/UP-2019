#include <iostream>
#include <cmath>
#include <limits>

int validate_input()
{
    int user_input = 0;
    std::cout << "Enter a number between -2147483648 and 2147483647" << std::endl;
    std::cin >> user_input;

    while(std::cin.fail() || (2147483647 < user_input || user_input < -2147483648))
    {
        std::cout << "Number is invalid";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Enter a number between -2147483648 and 2147483647" << std::endl;
        std::cin >> user_input;
    }

    return user_input;
}

int main() {
    int user_input = validate_input();

    int length = (int)std::log10(abs(user_input)) + 1;

    if(length > 9)
    {
        std::cout << "Yes" << std::endl;
    }
    else if(length == 1)
    {
        std::cout << "No" << std::endl;
    }
    else
    {

        bool result_ready = false;
        while(length > 0)
        {
            int current_number = user_input / pow(10, (length - 1));
            user_input = user_input % (int)pow(10, (length - 1));
            length--;

            int number_left = user_input;
            int length_of_number_left = (int)std::log10(abs(number_left)) + 1;

            while(length_of_number_left > 0)
            {
                int current_number_left = number_left / pow(10, (length_of_number_left - 1));
                number_left = number_left % (int)pow(10, (length_of_number_left - 1));
                length_of_number_left--;

                if(current_number == current_number_left)
                {
                    result_ready = true;
                    break;
                }
            }
            if(result_ready)
            {
                break;
            }
        }

        if(result_ready)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}