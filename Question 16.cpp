#include <iostream>
#include <algorithm>
#include <cmath>

/*
template <typename T>
T BinaryPower(T a, T b)
{
    long long int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
*/

template <typename T>
T Calculate (T n, T Exponent)
{
    int sum = 0, test;
    int hold = (int)pow(n, Exponent);

    while (hold != 0)
    {
        test = hold % 10;
        sum += test;
        hold /= 10;
    }
    return sum;
}

int main()
{
    //std::cout << BinaryPower(x, y) << " " << '\n';
    
    const int Base = 2, Exponent = 1000;

    std::cout << Calculate(Base, Exponent) << " " << '\n';

    return 0;
}

//:: Can only calculate 2 ^ 62 with BExpo, so sum over the digits.