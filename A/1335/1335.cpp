#include <iostream>

using namespace std;

int calc(int n)
{
  if (n < 3)
    return 0;
  if (n % 2 == 0)
    return n / 2 - 1;
  return n / 2;
}

int main()
{
  int n;
  cin >> n;
  while (n)
  {
    int x;
    cin >> x;
    cout << calc(x) << endl;
    n--;
  }
  return 0;
}