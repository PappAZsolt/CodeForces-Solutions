
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    int cnt = 0;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b > a)
      cnt++;
    if (c > a)
      cnt++;
    if (d > a)
      cnt++;
    cout << cnt << endl;
  }
}