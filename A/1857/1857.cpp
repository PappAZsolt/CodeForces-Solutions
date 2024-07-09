#include <iostream>

using namespace std;

string decision(int len)
{
  int sum = 0;
  while (len--)
  {
    int x;
    cin >> x;
    sum += x;
  }
  if (sum % 2 == 0)
    return "YES\n";
  return "NO\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int len;
    cin >> len;
    cout << decision(len);
  }
}