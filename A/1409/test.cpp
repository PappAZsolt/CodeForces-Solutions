#include <iostream>

using namespace std;

int calc(int a, int b)
{
  if (a != 0)
    return calc(a / 2, b + b) + b * (a % 2);
  return 0;
}

int main()
{
  cout << calc(100, 2);
}