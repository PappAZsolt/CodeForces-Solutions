#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  char a[] = "codeforces";
  int n;
  cin >> n;
  while (n--)
  {
    char x;
    cin >> x;
    if (strchr(a, x))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}