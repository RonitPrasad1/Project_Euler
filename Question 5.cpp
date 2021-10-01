#include <iostream>
#include <cmath>

template <typename T>
T Gcd(T a, T b)
{
    if (b == 0)
        return a;
    return Gcd(b, a % b);
}

template <typename T>
T LCM (T n)
{
    long long int hold = 1;
    for (long long int i = 1; i <= n; ++i)
    {
        hold = (hold * i) / (Gcd(hold, i));
    }
    return hold;
}

int main()
{
    long long int n;
    std::cin >> n;

    std::cout << LCM(n);
    return 0;
}

/*
Naive:
- BFS: {1} , {2 4 6 8 10 12 14 16 18 20} && {3 5 7 9 11 13 15 17 19}

Optimized:
- LCM = {a, b} => [a * gcd(a, b) * b]
*/