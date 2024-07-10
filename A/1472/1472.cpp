#include <iostream>

using namespace std;

bool testcase(int w, int h, int n)
{
  int cnt = 1;
  if (n == 1)
    return true;
  while (w % 2 == 0)
  {
    w /= 2;
    cnt *= 2;
  }
  while (h % 2 == 0)
  {
    h /= 2;
    cnt *= 2;
  }

  return cnt >= n;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (testcase(a, b, c) == true)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}