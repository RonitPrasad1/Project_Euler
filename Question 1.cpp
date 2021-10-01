#include <iostream>

int main()
{
  int sum = 0;

  int three = 3 * ((333) * (333 + 1) / 2);
  int five = 5 * ((199) * (199 + 1) / 2);
  int fifth = 15 * ((66) * (66 + 1) / 2);

  sum = three + five - fifth;

  std::cout << sum << '\n';

  return 0;
}

/*
999 / %3 = 333r
999 / %5 = 199r
999 / %15 = 66r
*/