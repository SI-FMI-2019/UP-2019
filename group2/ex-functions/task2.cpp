#include<iostream>
using namespace std;

// тук ще връщаме true/false, в зависимост от това, дали числото е четно, или не
bool isEven(int num){
    if(num%2 == 0)return true;
    else return false;// може да не се пише else, защото ако if-а се изпълни, ретърна ще прекъсне кода

    // по-кратък код, но същата логика
    //return num%2 == 0;
}

// тук след проверката ще печатаме съобщението
/**void isEven(int num){
    if(num%2 == 0)cout<<"is even"<<endl;
    else cout<<"is odd"<<endl;
}**/

int main(){
    if(isEven(4))cout<<"even";
    else cout<<"odd";
}

