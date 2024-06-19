#include <iostream>

using namespace std;

int main()
{
  int k, n, w;
  cin >> k >> n >> w;
  int i = 1, s = 0;
  while (w)
  {
    s += i * k;
    i++;
    w--;
  }
  cout << (s - n >= 0 ? s - n : 0);
}