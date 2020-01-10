#include <iostream>

struct Rational{
    int num;
    int denom;
};

Rational add(Rational first, Rational second)
{
    if(first.denom == 0 || second.denom == 0)
    {
        Rational zero;
        zero.num = 0;
        zero.denom = -1;
        return zero;
    }
    Rational result;

    result.num = first.num * second.denom + second.num * first.denom;
    result.denom = first.denom * second.denom;

    return result;
}

Rational subtract(Rational first, Rational second)
{
    if(first.denom == 0 || second.denom == 0)
    {
        Rational zero;
        zero.num = 0;
        zero.denom = -1;
        return zero;
    }
    Rational result;

    result.num = first.num * second.denom - second.num * first.denom;
    result.denom = first.denom * second.denom;

    return result;
}

Rational multiply(Rational first, Rational second)
{
    if(first.denom == 0 || second.denom == 0)
    {
        Rational zero;
        zero.num = 0;
        zero.denom = -1;
        return zero;
    }
    Rational result;

    result.num = first.num * second.num;
    result.denom = first.denom * second.denom;

    return result;
}

Rational devide(Rational first, Rational second)
{
    if(first.denom == 0 || second.denom == 0)
    {
        Rational zero;
        zero.num = 0;
        zero.denom = -1;
        return zero;
    }
    Rational result;

    result.num = first.num * second.denom;
    result.denom = first.denom * second.num;

    return result;
}

int main()
{
    Rational a;
    a.num = 3;
    a.denom = 4;

    Rational b;
    b.num = 1;
    b.denom = 2;

    Rational result = add(a, b);
    std::cout << result.num << "/" << result.denom << std::endl;
}