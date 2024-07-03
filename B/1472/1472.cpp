#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    int len, sum = 0, ones = 0;
    cin >> len;
    for (int i = 0; i < len; i++)
    {
      cin >> x;
      sum += x;
      if (x == 1)
        ones++;
    }
    if (sum % 2 == 0)
    {
      int half = sum / 2;
      if (half % 2 == 0)
        cout << "YES\n";
      else
      {
        if (ones)
          cout << "YES\n";
        else
          cout << "NO\n";
      }
    }
    else
      cout << "NO\n";
  }
}