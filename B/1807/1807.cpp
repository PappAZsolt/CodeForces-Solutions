#include <iostream>
#include <vector>

using namespace std;

string testcase(int len)
{
  int even = 0, odd = 0, x;
  for (int i = 0; i < len; i++)
  {
    cin >> x;
    if (x % 2 == 0)
      even += x;
    else
      odd += x;
  }
  if (even > odd)
    return "YES\n";
  return "NO\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    cout << testcase(len);
  }
}