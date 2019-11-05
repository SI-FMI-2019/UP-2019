#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    // task 12 loops
//    int number,digit,currentDigit;
//    cin>>digit>>number;
//    number = (number>=0)? number: (-number);
//    bool hasDigit=false;
//    while(number>0){
//        currentDigit= number%10;
//        if(digit==currentDigit){
//            hasDigit=true;
//            break;
//        }
//        number=number/10;
//    }
//   cout << hasDigit;


    //task 13 loops
//    int n, fibb1=0, fibb2=1;
//    cin>>n;
//    for(int i=1; i<n; i++)
//    {
//        int pr=fibb2;
//        fibb2=fibb1+pr;
//        fibb1=pr;
//    }
//    cout<< fibb1;


// task 14 loops
//    int base;
//    do {
//    std::cin >> base;
//    if (base%2 != 1) std::cout << "Please enter an odd number!\n";
//    } while (base%2 != 1);
//
//    for (int i = 1; i <= base; i += 2)
//    {
//        int j;
//        for(j = 1; (base - i)/2 >= j; j++)
//        {
//            std::cout << " ";
//        }
//        for(int k = 1; (base - 2*j)+2 >= k; k++)
//        {
//            std::cout << "*";
//        }
//       std::cout << "\n";
//    }
//
//    int root = base/2 - 1;
//    std::cout << std::setw(root) << "***\n";

// 2 task loops2
//    int number, secondnumber, i, j;
//    char symboll = '@';
//    cin>>number>>secondnumber;
//    for (i = 1; i <= number; i++)
//    {
//        for (j = 1; j <= secondnumber; j++)
//        {
//            cout<<symboll;
//        }
//        cout<<endl;
//    }


    char symb;
    cin >> symb;
    char text;

    int counter = 0;

    while (text != '.') {
        cin >> text;
        if (text == symb) { counter++; }
    }

    cout << "Counter: " << counter << endl;



    return 0;
}
