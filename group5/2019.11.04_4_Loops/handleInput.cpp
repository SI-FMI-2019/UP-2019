#include <iostream>
#include <limits>

using namespace std;

int SafetyInputInteger(int lowerBound, int upperBound)
{
    int intNumber;
    bool success;

    do {
        cout<<"Input a number: ";
        cin>> intNumber;
        cout<<endl<<intNumber<<endl;

        success = !cin.fail();

        if(!success)
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (!success || (intNumber < lowerBound) || (intNumber > upperBound));

    return intNumber;
}


int main()
{


    int height;
    height=SafetyInputInteger(-2147483648,25);
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
