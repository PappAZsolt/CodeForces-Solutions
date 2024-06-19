#include <iostream>
#include <string>

using namespace std;

int main()
{
  int cnt = 0;
  string a;
  int len;
  cin >> len;
  cin >> a;
  for (int i = 1; i < len; i++)
  {
    if (a[i - 1] == a[i])
      cnt++;
  }
  cout << cnt;
}