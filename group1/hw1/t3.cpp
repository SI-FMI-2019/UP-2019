#include <iostream>
#include <limits>
#include <cmath>
char validate_input_number()
{
    char user_input = 0;
    std::cout << "Enter a number (0-9, A-F): ";
    std::cin >> user_input;

    while(std::cin.fail() || ((user_input > 'F' || user_input < 'A') && (user_input > '9' || user_input < '0')))
    {
        std::cout << "Input is invalid";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Enter a number (0-9, A-F): ";
        std::cin >> user_input;
    }

    return user_input;
}

char validate_input_sign()
{
    char user_input = 0;
    std::cout << "Enter the operation (+, -, *, /, %): ";
    std::cin >> user_input;

    while(std::cin.fail() || ((user_input < '*' || user_input > '/') && user_input != '%'))
    {
        std::cout << "Input is invalid";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Enter the operation (+, -, *, /, %): ";
        std::cin >> user_input;
    }

    return user_input;
}
int char_to_int(char input)
{
    if(input >= 'A' && input <= 'F') {
        return input - ('A' - 10);
    }
    else
    {
        return input - '0';
    }
}
char single_int_to_hex(int number)
{
    if(number >= 10 && number <= 15) {
        return (char)(number + ('A' - 10));
    }
    else
    {
        return number + '0';
    }
}
void print_int_to_hex(int number)
{
    if(-10 < number && number < 10)
    {
        std::cout << number << std::endl;
    }
    else if(number >= 10)
    {
        int first = number/16;
        if(first > 0) std::cout << single_int_to_hex(first);

        int second = number % 16;
        std::cout << single_int_to_hex(second) << std::endl;
    }
    else
    {
        int first = abs(number)/16;
        std::cout << "-" << single_int_to_hex(first);

        int second = abs(number) % 16;
        std::cout << single_int_to_hex(second) << std::endl;
    }
}
int main() {
    char operation = 0;
    operation = validate_input_sign();

    char first = 0;
    first = validate_input_number();
    int first_int = char_to_int(first);

    char second = 0;
    second = validate_input_number();
    int second_int = char_to_int(second);

    int result = 0;
    if(operation == '+')
    {
        result = first_int + second_int;
    }
    else if(operation == '-')
    {
        result = first_int - second_int;
    }
    else if(operation == '*')
    {
        result = first_int * second_int;
    }
    else if(operation == '/')
    {
        result = first_int / second_int;
    }
    else if(operation == '%')
    {
        result = first_int % second_int;
    }

    print_int_to_hex(result);

    return 0;
}