#include <iostream>
#include <vector>

using namespace std;

int testcase(int len)
{
  string x;
  cin >> x;
  int i = 0, j = len - 1;

  while ((x[i] != x[j]) && i < j)
  {
    i++;
    j--;
  }
  int cnt = 0;
  for (int k = i; k <= j; k++)
    cnt++;
  return cnt;
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