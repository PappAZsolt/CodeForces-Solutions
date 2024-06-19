#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int x, sum = 0, cnt = 0, s = 0;
  while (n)
  {
    cin >> x;
    s++;
    if (x == 1)
      cnt++;
    if (s == 3)
    {
      if (cnt >= 2)
        sum++;
      cnt = 0;
      n--;
      s = 0;
    }
  }
  cout << sum;
}