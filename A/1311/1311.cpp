#include <iostream>

using namespace std;

int testcase(int a, int b)
{
  int cnt = 0;
  if (a == b)
    return 0;
  if (a > b)
  {
    int d = a - b;
    cnt++;
    if (d % 2 != 0)
      cnt++;
  }
  else if (a < b)
  {
    int d = b - a;
    cnt++;
    if (d % 2 == 0)
      cnt++;
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    cout << testcase(a, b) << endl;
  }
}