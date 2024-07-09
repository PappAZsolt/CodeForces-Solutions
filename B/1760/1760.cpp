#include <iostream>
#include <string>

using namespace std;

int testcases(int len)
{
  string a;
  cin >> a;
  int maxLetter = 0;
  for (int i = 0; i < len; i++)
  {
    if ((a[i] - 'a' + 1) > maxLetter)
      maxLetter = a[i] - 'a' + 1;
  }
  return maxLetter;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    cout << testcases(len) << endl;
  }
}
