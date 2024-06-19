#include <iostream>

using namespace std;

int main()
{
  int cnt = 0, a;
  cin >> a;
  while (a)
  {
    if (a - 5 >= 0)
      a = a - 5;
    else if (a - 4 >= 0)
      a = a - 4;
    else if (a - 3 >= 0)
      a = a - 3;
    else if (a - 2 >= 0)
      a = a - 2;
    else if (a - 1 >= 0)
      a = a - 1;
    cnt++;
  }
  cout << cnt;
}