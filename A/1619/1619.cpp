
#include <iostream>
#include <string>

using namespace std;

string sq(string s)
{
  int size = s.size();

  if (size % 2 != 0)
    return "NO\n";
  for (int i = 0; i < size / 2; i++)
  {
    if (s[i] != s[size / 2 + i])
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
    string a;
    cin >> a;
    cout << sq(a);
  }
}