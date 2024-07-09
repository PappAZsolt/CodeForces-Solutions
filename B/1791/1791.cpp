#include <iostream>
#include <vector>

using namespace std;

string testcases(int len)
{
  int x = 0, y = 0;
  bool candy = false;
  while (len--)
  {
    if (x == 1 && y == 1)
      candy = true;
    char pos;
    cin >> pos;
    if (pos == 'U')
      y++;
    else if (pos == 'D')
      y--;
    else if (pos == 'R')
      x++;
    else if (pos == 'L')
      x--;
  }
  if (x == 1 && y == 1)
    candy = true;
  if (candy == true)
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
    cout << testcases(len);
  }
}