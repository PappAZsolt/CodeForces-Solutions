#include <algorithm>
#include <iostream>

using namespace std;

void solve()
{
  int x, y;
  cin >> x >> y;
  cout << min(x, y) << " " << max(x, y) << endl;
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