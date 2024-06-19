#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int kFirst = k, lFirst = l, mFirst = m, nFirst = n;
  if (k == 1 or l == 1 or m == 1 or n == 1)
  {
    cout << d;
    return 0;
  }

  vector<int> a(100001, 0);
  bool end = true;
  while (end)
  {

    if (k <= d)
      a[k]++;
    if (l <= d)
      a[l]++;
    if (m <= d)
      a[m]++;
    if (n <= d)
      a[n]++;
    k += kFirst;
    l += lFirst;
    m += mFirst;
    n += nFirst;

    if (k > d and l > d and m > d and n > d)
      end = false;
  }
  int cnt = 0;
  for (int i = 1; i <= d; i++)
  {

    if (a[i] > 0)
      cnt++;
  }
  cout << cnt << endl;
}