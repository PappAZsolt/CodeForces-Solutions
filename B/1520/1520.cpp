#include <cmath>
#include <iostream>

using namespace std;

int testcases(long long n)
{
  int cnt = 0;
  for (int i = 1; i <= 9; i++)
  {
    long long nr = i;
    while (nr <= n)
    {
      cnt++;
      nr = nr * 10 + i;
    }
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    long long x;
    cin >> x;
    cout << testcases(x) << endl;
  }
}