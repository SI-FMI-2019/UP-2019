#include <iostream>
#include <cmath>
#include<limits>

int validate_input()
{
    int user_input = 0;
    std::cout << "Enter a number between 0 and 1 000 000" << std::endl;
    std::cin >> user_input;

    while(std::cin.fail() || (1000000 < user_input || user_input < 0))
    {
        std::cout << "Number is invalid";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Enter a number between 0 and 1 000 000" << std::endl;
        std::cin >> user_input;
    }

    return user_input;
}
int main() {
    int user_input = validate_input();

    int current_day = 1;
    for(int current_year = 1; current_year < 3000; current_year++)
    {
        if(current_year % 100 == 0 && current_year % 400 != 0)
        {
            current_day += 365;
        }
        else if(current_year % 400 == 0)
        {
            current_day += 366;
        }
        else if(current_year % 4 == 0)
        {
            current_day += 366;
        }
        else
        {
            current_day += 365;
        }
        if(current_day > user_input)
        {
            std::cout << current_year << std::endl;
            break;
        }
    }

    return 0;
}