#include <iostream>

using namespace std;

int main()
{
  int cnt = 0, n;
  cin >> n;
  while (n > 0)
  {
    if (n - 100 >= 0)
      n = n - 100, cnt++;
    else if (n - 20 >= 0)
      n = n - 20, cnt++;
    else if (n - 10 >= 0)
      n = n - 10, cnt++;
    else if (n - 5 >= 0)
      n = n - 5, cnt++;
    else
    {
      n--;
      cnt++;
    }
  }
  cout << cnt;
}