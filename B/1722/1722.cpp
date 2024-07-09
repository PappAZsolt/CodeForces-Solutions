
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string decision(int len)
{
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < len; i++)
  {
    char upper = a[i], lower = b[i];
    if (a[i] == 'R' && b[i] != 'R')
      return "NO\n";
    if (b[i] == 'R' && a[i] != 'R')
      return "NO\n";
  }
  return "YES\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    cout << decision(len);
  }
}