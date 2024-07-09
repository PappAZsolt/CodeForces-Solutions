#include <algorithm>
#include <climits>

#include <iostream>
#include <vector>

#define ll long long

using namespace std;

ll solve(int len)
{
  vector<ll> a(len), b(len);
  ll minA = INT_MAX, minB = INT_MAX;
  for (int i = 0; i < len; i++)
    cin >> a[i], minA = min(a[i], minA);
  for (int i = 0; i < len; i++)
    cin >> b[i], minB = min(b[i], minB);
  ll total = 0;
  for (int i = 0; i < len; i++)
  {
    ll d = max(a[i] - minA, b[i] - minB);
    total += d;
  }
  return total;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    cout << solve(len) << endl;
  }
}