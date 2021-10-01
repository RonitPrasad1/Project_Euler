#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <iomanip>

template <typename T>
T isPrime (T n)
{
    if (n < 2)
    {
        return false;
    }

    for (long long int i = 3; i <= sqrt(n); i += 2)
    {
        if (!(n % i))
        {
            return false;
        }
    }
    return true;
}

int main()
{
   long long int Sum = 2;
   
   for (long long int i = 3; i < 2000000; i += 2)
   {
       if (isPrime(i))
       {
         Sum += i;
       }
   }

   std::cout << static_cast<long long int> (Sum) << '\n';
   return 0;
}