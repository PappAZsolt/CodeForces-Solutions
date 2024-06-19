#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int half = n / 2;
  if (n <= 2)
    cout << "NO";
  else if (n % 2 == 0)
  {
    if (half + half == n and half % 2 == 0)
      cout << "YES\n";
    else if ((half - 1) + (half + 1) == n)
      cout << "YES\n";
  }
  else
    cout << "NO\n";
}
