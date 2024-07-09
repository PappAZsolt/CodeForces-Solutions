#include <iostream>

using namespace std;

int main()
{
  int n;
  int m = 1, i = 1, cnt = 0;
  cin >> n;
  while (m <= n)
  {
    m = ((i + (i * i)) / 2);
    if (m > n)
      break;

    n -= m;
    cnt++, i++;
  }
  cout << cnt << endl;
}