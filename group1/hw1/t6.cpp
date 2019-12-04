#include <iostream>
#include <limits>
#include <cmath>

const int WHITE_CIRCLE_RADIUS = 2;
const int BLACK_CIRCLE_RADIUS = 3;
double validate_input_number()
{
    double user_input = 0;
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
//0 - outside
//1 - inside
//2 - on the border
int check_square(double x, double y)
{
    if(-1 < x && x < 1 && -1 < y && y < 1)
    {
        return 1;
    }
    else if(x == -1 || x == 1 || y == -1 || y == 1)
    {
        return 2;
    }
    return 0;
}

int check_white_circle(double x, double y)
{
    if(pow(x, 2) + pow(y, 2) < pow(WHITE_CIRCLE_RADIUS, 2))
    {
        return 1;
    }
    else if(pow(x, 2) + pow(y, 2) == pow(WHITE_CIRCLE_RADIUS, 2))
    {
        return 2;
    }
    return 0;
}

int check_black_circle(double x, double y)
{
    if(pow(x, 2) + pow(y, 2) < pow(BLACK_CIRCLE_RADIUS, 2))
    {
        return 1;
    }
    else if(pow(x, 2) + pow(y, 2) == pow(BLACK_CIRCLE_RADIUS, 2))
    {
        return 2;
    }
    return 0;
}
int main() {
    double x = validate_input_number();
    double y = validate_input_number();

    //Black: check_square == 1 or check_black_circle == 1
    int square = check_square(x, y);
    int white_circle = check_white_circle(x, y);
    int black_circle = check_black_circle(x, y);

    std::cout << square << " " << white_circle << " " << black_circle;
    if(square == 1)
    {
        std::cout << "Black" << std::endl;
    }
    else if(black_circle == 1 && square == 0 && white_circle == 0)
    {
        std::cout << "Black" << std::endl;
    }
    else if(white_circle == 1)
    {
        std::cout << "White" << std::endl;
    }
    else if(black_circle == 0 && white_circle == 0 && square == 0)
    {
        std::cout << "Outside" << std::endl;
    }
    else if(square == 2 || white_circle == 2 || black_circle == 2)
    {
        std::cout << "Undefined" << std::endl;
    }
    return 0;
}

