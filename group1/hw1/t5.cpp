#include <iostream>
#include <limits>
#include <cmath>

int validate_input_number()
{
    int user_input = 0;
    std::cout << "Enter a number: ";
    std::cin >> user_input;

    while(std::cin.fail())
    {
        std::cout << "Input is invalid";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Enter a number: ";
        std::cin >> user_input;
    }

    return user_input;
}

void solve_equation(int a, int b, int c)
{
    double x1_quadratic = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2*a;
    double x2_quadratic = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2*a;

    if(a == 0)
    {
        std::cout << "Not a quadratic equation..." << std::endl;
        if(b == 0 || c > 0)
        {
            std::cout << "Not an valid equation..." << std::endl;
            return;
        }
        std::cout << "x1 = " << sqrt(-c/b) << std::endl << "x2 = " << -sqrt(-c/b) << std::endl;
        return;
    }

    double x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    bool is_x1_non_negative = false, is_x2_non_negative = false;

    if(x1_quadratic > 0)
    {
        x1 = sqrt(x1_quadratic);
        x2 = -x1;
        is_x1_non_negative = true;
    }

    if(x2_quadratic > 0)
    {
        x3 = sqrt(x2_quadratic);
        x4 = -x3;
        is_x2_non_negative = true;
    }

    if(is_x1_non_negative && is_x2_non_negative)
    {
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
        std::cout << "x3 = " << x3 << std::endl;
        std::cout << "x4 = " << x4 << std::endl;
    }

    if(is_x1_non_negative && !is_x2_non_negative)
    {
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }

    if(!is_x1_non_negative && is_x2_non_negative)
    {
        std::cout << "x1 = " << x3 << std::endl;
        std::cout << "x2 = " << x4 << std::endl;
    }
}

int main() {

    int a = validate_input_number();
    int b = validate_input_number();
    int c = validate_input_number();

    solve_equation(a, b, c);

    return 0;
}