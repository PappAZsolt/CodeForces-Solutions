#include <iostream>

using namespace std;

string decision(int a, int b, int c, int d)
{
  int max1 = 0, max2 = 0, rem1 = 0, rem2 = 0;
  if (a < b)
    swap(a, b);
  max1 = a, rem1 = b;

  if (c < d)
    swap(c, d);
  max2 = c, rem2 = d;
  if (max1 < rem2)
    return "NO\n";
  if (max2 < rem1)
    return "NO\n";
  return "YES\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << decision(a, b, c, d);
  }
}