#include <iostream>

int main()
{
    long long int sum = 0, curr = 3, prev = 2, start = 1;    
    sum += 2;
    
    while (curr <= 4000000)
    {
        if (!(curr & 1))
        {
            sum += curr;
        }
    
        start = prev;
        prev = curr;
        curr = prev + start;
    }
    
    std::cout << (long long int) sum << '\n';
    
    return 0;
}