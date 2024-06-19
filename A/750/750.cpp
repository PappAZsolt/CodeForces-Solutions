#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int cnt = 0, sum = 0;
  int time = 240 - k;
  for (int i = 1; i <= n; i++)
  {
    if (sum + i * 5 > time)
      break;
    else
    {
      sum += i * 5;
      cnt++;
    }
  }
  cout << cnt << endl;
}