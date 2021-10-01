#include <iostream>
#include <cmath>
#include <cstdlib>

template <typename T>
T BabylonianAlgorithm(T n)
{
    long long int sqrtN = n / 2, temp = 0;

    while (sqrtN != temp)
    {
        temp = sqrtN;
        sqrtN = (n / temp + temp) / 2;
    }
    return sqrtN;
}

int main()
{
    long long int n;
    std::cin >> n;

    for (long long int i = 2; i <= BabylonianAlgorithm(n); ++i)
    {
        if (n % i == 0)
        {
            n /= i;
        }
    }
    
    if (n > 2)
    {
        std::cout << (long long int) n << '\n';
    }
    
    return 0;
}