#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int diff = 0, same = 0;
  while (a > 0 and b > 0)
  {
    diff++;
    a--, b--;
  }
  while (a >= 2)
  {
    same++;
    a -= 2;
  }
  while (b >= 2)
  {
    same++;
    b -= 2;
  }
  cout << diff << " " << same << endl;
}