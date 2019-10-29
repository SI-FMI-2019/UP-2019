#include <iostream>
#include <math.h>

using namespace std;

int main()
{

// 9 task
    int number1;
    cout<<"Enter a number:"<<endl;
    cin>>number1;
    switch(number1)
    {
        case 5:
        case 4:
        case 3: cout<<"Spring";
            break;
        case 8:
        case 7:
        case 6: cout <<"Summer";
           break;
        case 11:
        case 10:
        case 9: cout <<"Autumn";
           break;
        case 12:
        case 2:
        case 1: cout <<"Winter";
            break;
         default: cout<< "Error";
    }


// 8 task
//    int number=0;
//    cout<<"Enter a number: " ;
//    cin>>number;
//    int lastDigit=number%10;
//    switch(lastDigit)
//    {   case 0: cout <<"zero";
//        break;
//        case 1: cout<<"one";
//        break;
//        case 2: cout <<"two";
//        break;
//        case 3: cout <<"three";
//        break;
//        case 4: cout <<"four";
//        break;
//        case 5:cout <<"five";
//        break;
//        case 6:cout <<"six";
//        break;
//        case 7:cout <<"seven";
//        break;
//        case 8: cout <<"eight";
//        break;
//        case 9: cout<<"nine";
//        break;
//        default: cout<< "Error";
//
//    }





// 7 task
//    int a,b,c;
//    cin >>a>>b>>c;
//    if(a+b>c && b+c>a && a+c>b)
//    {
//        cout<<"yes";
//        if(a==b==c)
//        {
//            cout<<"ravnostranen";
//
//        }else if(a==b || b==c || a==c)
//        {
//            cout<<"ravnobedren";
//        }else
//        {
//            cout<<"raznostranen";
//        }
//
//    }
//    else
//    {
//        cout<<"no";
//    }





// 6 task
//    int Num1,Num2,Num3;
//    cin>>Num1>>Num2>>Num3;
//    if(Num2<Num1&& Num1<Num3)
//    {
//        cout<<"yes";
//
//    }
//    else
//    {
//
//        cout<<"no";
//    }





// 5 task
//    int a,b,c;
//    cin>>a>>b>>c;
//    if(a<b &&b<c)
//    {
//        cout<<"yes";
//    }
//    else
//    {
//    cout<<"no";
//    }



// 4 task
//    int a, b, c;
//    double diskr, x1, x2;
//    cin>>a>>b>>c;
//
//    diskr = b*b - 4*a*c;
//    if(diskr > 0 ) {
//        x1 = (b*(-1) + sqrt(diskr)) /2*a;
//        x2 = (b*(-1) - sqrt(diskr)) /2*a;
//        cout<<x1<< " " <<x2;
//    } else
//    {
//        cout<<"Diskr is not ok"<<endl;
//    }


// 3 task
//    int num1=0,num2=0,num3=0,minn=0;
//    cin>>num1>>num2>>num3;
//    minn = num1;
//    if(minn>num2)
//        minn=num2;
//    if(minn>num3)
//        minn=num3;
//    cout<<minn;
    return 0;
}
