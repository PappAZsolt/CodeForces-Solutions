#include <iostream>

using namespace std;

int testcase(int len)
{
  int cnt = 0, maxCnt = -1;
  while (len--)
  {
    int x;
    cin >> x;
    if (x == 0)
      cnt++;
    else
      cnt = 0;
    if (cnt > maxCnt)
      maxCnt = cnt;
  }
  return maxCnt;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    cout << testcase(len) << endl;
  }
}