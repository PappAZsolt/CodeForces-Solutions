#include <iostream>

using namespace std;

int main()
{
  int maxSpace = 0, n, Space = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int a, b;
    cin >> a >> b;
    if (a != 0)
      Space -= a;
    if (b != 0)
      Space += b;
    if (Space > maxSpace)
      maxSpace = Space;
  }
  cout << maxSpace;
}