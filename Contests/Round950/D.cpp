#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool isNonDecreasing(const vector<int> &b)
{
  for (int i = 1; i < b.size(); ++i)
  {
    if (b[i] < b[i - 1])
    {
      return false;
    }
  }
  return true;
}

void solve()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }

    if (n == 3)
    {

      int b1 = gcd(a[0], a[1]);
      int b2 = gcd(a[1], a[2]);
      if (b1 <= b2)
      {
        cout << "YES\n";
      }
      else if (gcd(a[0], a[2]) <= b2)
      {
        cout << "YES\n";
      }
      else
      {
        cout << "NO\n";
      }
      continue;
    }

    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; ++i)
    {
      b[i] = gcd(a[i], a[i + 1]);
    }

    if (isNonDecreasing(b))
    {
      cout << "YES\n";
      continue;
    }

    bool possible = false;
    for (int i = 1; i < n - 1; ++i)
    {

      vector<int> new_b;
      for (int j = 0; j < n - 1; ++j)
      {
        if (j == i - 1)
        {
          new_b.push_back(gcd(a[j], a[j + 2]));
        }
        else if (j != i)
        {
          new_b.push_back(b[j]);
        }
      }
      if (isNonDecreasing(new_b))
      {
        possible = true;
        break;
      }
    }

    cout << (possible ? "YES" : "NO") << '\n';
  }
}

int main()
{

  solve();
  return 0;
}
