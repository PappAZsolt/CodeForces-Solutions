#include <algorithm>
#include <iostream>

using namespace std;

long long solve(long long a, long long b, long long c)
{
  if (a == 1)
    return 1;
  long long firstEl = abs(a - 1);
  long long secEl = abs(b - c);
  secEl = secEl + abs(c - 1); // DIST TO FLOOR
  if (firstEl < secEl)
    return 1;
  if (firstEl > secEl)
    return 2;
  return 3;
}

int main()
{
  long long n;
  cin >> n;
  while (n--)
  {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << endl;
  }
}