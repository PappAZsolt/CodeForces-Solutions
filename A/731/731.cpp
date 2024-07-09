#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int len = s.size();

  int d = abs(s[0] - 'a'), cnt = 0;

  if (d <= 13) // half
    cnt += d;
  else
    cnt += (26 - d);
  for (int i = 0; i < len - 1; i++)
  {
    d = abs(s[i] - s[i + 1]);

    if (d <= 13)
      cnt += d;
    else
      cnt += (26 - d);
  }
  cout << cnt << endl;
}