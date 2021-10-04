#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>

constexpr long long int MOD = 1e9 + 7;

template <typename T>
T Factorial(T n) 
{ 
    long long int fact = 1 % MOD;
    for(long long int i = 1; i <= n; ++i)
    {
        fact = (fact % MOD * i % MOD) % MOD;
    }
    return fact % MOD;
}

int main()
{
    long long int Total = 40;

    long long int store = 0;
    store = Factorial(Total) / Factorial(20) * Factorial (Total - 20);

    std::cout << store << " " << '\n';

    return 0;
}

/*
Doesn't work, but just store up to 500 factorials and just break them their digits and apply the combinations formula from there -> trivial.
*/