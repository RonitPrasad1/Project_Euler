#include <iostream>
#include <cmath>

int main() 
{
	long long int n, a, b, c, Squares, Product = 0;
	std::cin >> n;
    
    for (a = 1; a <= n; ++a)
	{
        for (b = a + 1; b <= n; ++b)
        {
            Squares = (a * a) + (b * b);
            for (c = a + 2; c <= n; ++c)
			{
                if (Squares == std::pow(c, 2) && (a + b + c == n))
                {
                    Product = a * b * c;
                    //std::cout << a << " " << b << " " << c << '\n';
                }
            }
        }
    }
    std::cout << Product << '\n';
    return 0;
}
