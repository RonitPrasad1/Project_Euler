//Question 1:
#include <iostream>

int main()
{
  int sum = 0;

  int three = 3 * ((333) * (333 + 1) / 2);
  int five = 5 * ((199) * (199 + 1) / 2);
  int fifteen = 15 * ((66) * (66 + 1) / 2);

  sum = three + five - fifteen;

  std::cout << sum << '\n';

  return 0;
}

/*
999 / %3 = 333r
999 / %5 = 199r
999 / %15 = 66r
*/

/*
int sum3, sum5, sum15;

for (int i = 0; i < 999; ++i)
{
    if (i % 3 == 0)
       ++sum3;
}

for (int i = 0; i < 999; ++i)
{
    if (i % 5 == 0)
       ++sum5;
}

for (int i = 0; i < 999; ++i)
{
    if (i % 15 == 0)
       ++sum15;
}

int hold = sum3 + sum5 - sum15
std::cout << hold << '\n';
*/