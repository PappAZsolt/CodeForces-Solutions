#include <iostream>

using namespace std;

bool checkPrime(int n)
{
  if (n == 0 || n == 1 || (n % 2 == 0 && n != 2))
    return 0;
  if (n == 2)
    return 1;
  for (int i = 3; i * i <= n; i += 2)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  int a, b;
  cin >> a >> b;
  int next = a + 1;
  while (true)
  {
    if (checkPrime(next))
      break;
    next++;
  }
  if (next == b)
    cout << "YES\n";
  else
    cout << "NO\n";
}