#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    vector<int> a(4);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.begin() + 3);
    if (a[2] + a[1] >= 10)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}