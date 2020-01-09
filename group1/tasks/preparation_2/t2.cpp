#include <iostream>

/*
 * Да се напише функция, която по дадено число в интервала 0-86000, го интерпретира като брой секунди
 * от началото на деня и връща като резултат часа във формат HH:MM. Да се напише програма,
 * която използва написаната функция, за да въведе от конзолата цяло число,
 * и по него да изчисли и изведе часа във формат HH:MM.
*/

char int_to_char(int number)
{
    return number + '0';
}
char* convert_number_to_hhmm(int seconds)
{
    char* result = new char[6]; //HH:MM\0 е 6 символа

    int hours = (seconds / 60) / 60; //Първо в минути, после минутите в часове
    int minutes = (seconds / 60) % 60; //Дава ни останалите минути

    //Ако часът например е 7 часа и 3 минути, искаме да го покажем като 07:03, а не като 7:3

    if(hours < 10)
    {
        result[0] = '0';
        result[1] = int_to_char(hours);
    }
    else
    {
        result[0] = int_to_char(hours / 10); //взимаме първата цифра
        result[1] = int_to_char(hours % 10); //взимаме втората цифра
    }

    result[2] = ':';

    if(hours < 10)
    {
        result[3] = '0';
        result[4] = int_to_char(minutes);
    }
    else
    {
        result[3] = int_to_char(minutes / 10); //взимаме първата цифра
        result[4] = int_to_char(minutes % 10); //взимаме втората цифра
    }

    result[5] = '\0';
    return result;
}
int main() {

    int input = 0;
    std::cin >> input;
    char* result = convert_number_to_hhmm(input);
    std::cout << result << std::endl;
    delete[] result;
    return 0;
}
