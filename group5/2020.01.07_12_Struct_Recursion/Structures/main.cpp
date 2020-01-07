#include <iostream>
#include <math.h>


using namespace std;

struct University {
  char name[100];
  char city[100];
  int rank;
};

struct Point {
    int x;
    int y;
};

calculateDist( Point p1, Point p2)
{


}

int main()
{

    int a = 5;


//    University su;
//    cin>>su.name;
//    cin>>su.city;
//    cin>>su.rank;
//    cout << "University with name "<<su.name<< " City: "<< su.city<< " and rank "<<su.rank << endl;


    Point p1, p2;
    p1.x = 1;
    p1.y = 1;

    p2.x = 2;
    p2.y = 2;


    double distance = sqrt(pow((p2.y - p1.y), 2) + (pow((p2.x-p1.x), 2)));

    cout<<distance;

    return 0;
}
