#include <iostream>

const int MAXLimit = 1000000;

int main()
{
    long lont int n, hold = 0, maxSequence = 0, counter;
    for (long lont int i = 2; i <= MAXLimit; ++i)
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
        
        if (counter > sequenceLength)
        {
            hold = counter;
            max = i;
        }
    }
    std::cout << maxSequence << " ";
    return 0;
}