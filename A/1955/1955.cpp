#include <iostream>

using namespace std;

void solve()
{
  int n, a, b;
  cin >> n >> a >> b;
  if (n == 1)
    cout << a << endl;
  else
  {
    int cnt = 0;
    if (2 * a <= b)
      cout << n * a << endl;
    else
    {
      while (n >= 2)
      {
        cnt += b;
        n -= 2;
      }
      if (n != 0)
        cnt += a;
      cout << cnt << endl;
    }
  }
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    solve();
  }
}