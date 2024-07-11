#include <iostream>

using namespace std;

string solve(int len)
{
  int sum = 0, odd = 0, even = 0;
  while (len--)
  {
    int x;
    cin >> x;
    sum += x;
    if (x % 2 != 0)
      odd++;
    else
      even++;
  }
  if (sum % 2 != 0)
    return "YES\n";
  if (odd != 0 && even != 0)
    return "YES\n";
  return "NO\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    cout << solve(len);
  }
}