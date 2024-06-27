#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  cin >> a;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == '.')
      cout << 0;
    else if (a[i] == '-')
    {
      if (a[i + 1] == '.')
        cout << 1;
      else
        cout << 2;
      i++;
    }
  }
}
