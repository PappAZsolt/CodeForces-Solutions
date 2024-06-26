#include <iostream>

using namespace std;

int main()
{
  int a, b;
  int x;
  cin >> x;
  while (x--)
  {
    cin >> a >> b;
    int s = 0, sum = 0, d = 0, m = 0;
    if (b < a)
      swap(a, b);
    s = b - a;
    d = s / 10;
    m = s % 10;
    sum = d;
    if (m > 0)
      sum++;
    cout << sum << endl;
  }
}