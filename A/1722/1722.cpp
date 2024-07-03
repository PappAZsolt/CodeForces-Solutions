#include <algorithm>

#include <iostream>
#include <string>

using namespace std;

string name = "Timru";

string tim(string x, int len)
{
  if (len != 5)
    return "NO\n";
  sort(x.begin(), x.end());
  for (int i = 0; i < len; i++)
  {
    if (x[i] != name[i])
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
    string x;
    cin >> len >> x;
    cout << tim(x, len);
  }
}