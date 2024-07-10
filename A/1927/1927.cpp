#include <iostream>
#include <string>

using namespace std;

int testcase(int len)
{
  string x;
  cin >> x;
  int firstB = 0, lastB = len - 1;
  for (int i = 0; i < len; i++)
    if (x[i] == 'B')
    {
      firstB = i;
      break;
    }
  for (int i = len - 1; i >= 0; i--)
    if (x[i] == 'B')
    {
      lastB = i;
      break;
    }
  return lastB - firstB + 1;
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