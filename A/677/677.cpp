#include <iostream>

using namespace std;

int main()
{
  int n, h, cnt = 0;
  cin >> n >> h;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    if (x > h)
      cnt += 2;
    else
      cnt++;
  }
  cout << cnt;
}