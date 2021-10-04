#include <iostream>

const int MAXLimit = 1000000;

int main()
{
    long long int n, hold = 0, max = 0, counter;
    for (long long int i = 2; i <= MAXLimit; ++i)
    {
        counter = 1;
        n = i;
        
        while (n != 1)
        {
            if (!(n & 1)) 
            {
                n = n / 2;
            } 
            else 
            {
                n = 3 * n + 1;
            }
            ++counter;
        }
        
        if (counter > hold)
        {
            hold = counter;
            max = i;
        }
    }
    std::cout << max << " ";
    return 0;
}