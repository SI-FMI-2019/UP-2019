#include <iostream>
#include <limits>

using namespace std;

int SafetyInputInteger(int lowerBound, int upperBound)
{
    int intNumber;

    do {
        cout<<"Input a number: ";
        cin>> intNumber;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
    } while ((intNumber < lowerBound) || (intNumber > upperBound));

    return intNumber;
}


int main()
{


    int height;
    height=SafetyInputInteger(1,25);
    cout<< "Height is "<<height<<endl;


//    int age = 0;
//    while ((std::cout << "How old are you? ")
//         && !(std::cin >> age)) {
//    std::cout << "That's not a number; ";
//    std::cin.clear();
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    }
//    std::cout << "You are " << age << " years old\n";
    return 0;
}
