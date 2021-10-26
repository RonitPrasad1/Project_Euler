#include <iostream>
#include <cmath>

long long int Power(long long int a, long long int b)
{
    if (b == 0)
    {
        return 1;
    }
    
    long long int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a;
            a = a * a;
            b >>= 1;
        }
    }
    return res;
}

template <typename T>
T isPrime (T n)
{
    if (n <= 1)
    {
        return false;
    }
    
    if (n <= 3)
    {
        return true;
    }
    
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    
    for (long long int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
    
template <typename T> 
T isCircular (T n)
{
    const static int Base10 = 10;
    long long int counter = 0, temp = n, remainders = 0, div = 0;
    while (temp)
    {
        ++counter;
        temp /= Base10;
    }
    
    long long int holdNum = n;
    
    while (isPrime(holdNum))
    {
        remainders = holdNum % 10;
        div = holdNum / 10;
        holdNum = Power(Base10, counter - 1) * remainders + div;
        
        if (holdNum == n)
        {
            return true;
        }
    }
    return false;   
}

int main()
{
    long long int n, counter = 0;
    std::cin >> n;
    
    for (long long int i = n; i >= 0; --i)
    {
        if(isCircular(i) && isPrime(i))
        {
            ++counter;
        }
    }
    
    std::cout << "Total number of circular primes below one million are: " << counter << '\n';
    return 0;   
}