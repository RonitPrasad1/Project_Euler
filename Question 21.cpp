#include <iostream>

template <typename T>
T Amicable(T n)
{
    long long int Sum1, Sum2, AmicableSum = 0;
    
    for (long long int i = 1; i < n; ++i)
    {
        Sum1 = 0;
        for (long long int j = 1; j < i; ++j)
        {
            if ( (i % j == 0) )
            {
                Sum1 += j;
            }
        }
        
        Sum2 = 0;
        for (long long int k = 1; k < Sum1; ++k)
        {
            if (Sum1 % k == 0)
            {
                Sum2 += k;
            }
        }
        
        if ( (Sum2 == i) && (Sum2 != Sum1) )
        {
            AmicableSum += i;
        }
    }
    return AmicableSum;
}
    

int main ()
{
    std::cout << "Enter the number in: ";

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    
    long long int n;
    std::cin >> n;
    
    std::cout << '\n';
    
    std::cout << "Amicable Sum is: " << Amicable(n);
    return 0;
}