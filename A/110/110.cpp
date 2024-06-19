#include <iostream>

using namespace std;

int main()
{
  long long a;
  cin >> a;
  int cnt = 0;
  while (a)
  {
    int b = a % 10;
    if (b == 4 or b == 7)
      cnt++;
    a /= 10;
  }
  if (cnt == 4 or cnt == 7)
    cout << "YES\n";
  else
    cout << "NO\n";
}