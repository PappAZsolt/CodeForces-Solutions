#include <cstring>
#include <iostream>

using namespace std;

string uppies(string x)
{
  for (int i = 0; i < x.size(); i++)
  {
    x[i] = toupper(x[i]);
  }
  return x;
}

int main()
{
  int n;
  cin >> n;
  while (n)
  {
    string x;
    cin >> x;
    if (uppies(x) == "YES")
      cout << "YES\n";
    else
      cout << "NO\n";
    n--;
  }
}