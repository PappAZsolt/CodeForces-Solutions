#include <iostream>

using namespace std;

int main()
{

  int n;
  cin >> n;
  while (n--)
  {
    int switches = 0;
    string a;
    cin >> a;
    if (a[0] != 'a')
      switches++;
    if (a[1] != 'b')
      switches++;
    if (a[2] != 'c')
      switches++;
    if (switches > 2)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}