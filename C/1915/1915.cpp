#include <cmath>
#include <iostream>

using namespace std;

string solve(long long len)
{
  long long x, sum = 0;
  while (len--)
  {
    cin >> x;
    sum += x;
  }
  long long sq = sqrt(sum);
  if (sq * sq == sum)
    return "YES\n";
  return "NO\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    long long len;
    cin >> len;
    cout << solve(len);
  }
}