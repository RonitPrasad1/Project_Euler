#include <iostream>
#include <vector>
#include <cmath>

template <typename T>
T Multiply (std::vector <T> &vec, T digit)
{
    long long int carry = 0, ans;
    long long int vecSize = vec.size();
    
    for (long long int i = 0; i < vecSize; ++i)
    {
        ans = carry + vec[i] * digit;
        vec[i] = ans % 10;
        carry = ans / 10;
    }
    
    while (carry != 0)
    {
        vec.push_back(carry % 10);
        carry /= 10;
    }
}

template <typename T>
T SumofDigits(T n)
{
    long long int sum = 0;
    std::vector <long long int> vec;
    vec.push_back(1);
    
    for (long long int i = 1; i <= n; ++i)
        Multiply(vec, i);
    
    long long int vecSize = vec.size();
    for (long long int i = 0; i < vecSize; ++i)
    {
        sum += vec[i];
    }
    return sum;
}
    
int main()
{
    std::ios_base::sync_with_stdi(false);
    std::cin.tie(0);

    long long int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    std::cout << "The Factorial Digit Sum is: " << SumofDigits(n);
    return 0;
}