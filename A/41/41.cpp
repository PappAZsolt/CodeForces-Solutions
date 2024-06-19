#include <iostream>

using namespace std;

int main()
{
  string a, b;
  string reverse = "YES";
  cin >> a >> b;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    if (a[i] != b[n - i - 1])
      reverse = "NO";
  }
  cout << reverse;
}