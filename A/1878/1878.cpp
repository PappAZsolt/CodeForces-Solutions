#include <iostream>

using namespace std;

string testcase(int len, int k)
{
  bool answer = false;
  for (int i = 0; i < len; i++)
  {
    int x;
    cin >> x;
    if (x == k)
      answer = true;
  }
  if (answer == true)
    return "YES\n";
  return "NO\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len, k;
    cin >> len >> k;
    cout << testcase(len, k);
  }
}