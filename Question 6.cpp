#include <iostream>
#include <cmath>

constexpr int MAX = 100;

/*
template <typename T>
T Power(T x, T y)
{
  if (y == 0)
    return 1;
  else if (y % 2 == 0)
    return (long long int) Power(x, y / 2) * Power(x, y / 2);
  else
    return (long long int) x * Power(x, y / 2) * Power(x, y / 2);
}
*/

int main()
{
    long long int Sum = 0, SumSquare = 0, SquareSum = 0;
    
    for (long long int i = 1; i <= MAX; ++i)
    {
        SumSquare += pow(i, 2);
    }
    
    Sum = (MAX * (MAX + 1) / 2);
    //std::cout << Sum << '\n';
    
    SquareSum = pow(Sum, 2);
    //std::cout << SquareSum << '\n';
    
    std::cout << (long long int) SquareSum - SumSquare << '\n';

    return 0;
}