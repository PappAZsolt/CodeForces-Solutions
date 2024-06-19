#include <iostream>

using namespace std;

int main()
{
  int n, cnt = 0;
  cin >> n;
  while (n)
  {
    int a, b;
    cin >> a >> b;
    if (a + 2 <= b)
      cnt++;
    n--;
  }
  cout << cnt;
}