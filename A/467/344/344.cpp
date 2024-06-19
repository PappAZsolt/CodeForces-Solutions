#include <iostream>

using namespace std;

int main()
{
  int n, cnt = 0;
  cin >> n;
  string a, b;
  cin >> a;
  n--;
  while (n)
  {
    cin >> b;
    if (a[0] == b[1])
    {
      cnt++;
        }
    a = b;
    n--;
  }
  cout << cnt + 1;
}