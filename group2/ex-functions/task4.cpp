#include<iostream>
#include<math.h>
using namespace std;

double distance(double x1,double y1,double x2, double y2){
    double x = (x1 - x2)*(x1 - x2);
    double y = (y1 - y2)*(y1 - y2);
    double dist  = sqrt(x+y);
    return dist;
}

int main(){
    cout<<distance(3,2,9,7)<<endl;
}
