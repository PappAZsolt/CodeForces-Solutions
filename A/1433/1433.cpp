#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x, sum = 0;
    cin >> x;
    int lastX = x % 10;
    for (int i = 1; i <= lastX; i++)
    {
      if (i < lastX)
        sum += 10;
      if (i == lastX)
      {

        int cnt = 1;
        while (i <= x)
        {
          sum += cnt;
          cnt++;
          i = i * 10 + lastX;
        }
      }
    }
    cout << sum << endl;
  }
}