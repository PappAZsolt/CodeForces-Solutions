#include <iostream>

using namespace std;

int main()
{
  int n, s;
  cin >> n >> s;
  string a;
  cin >> a;
  int i = 0;
  while (s)
  {
    while (i < n)
    {
      if (a[i] == 'B' and a[i + 1] == 'G')
      {
        swap(a[i], a[i + 1]);
        i += 2;
      }
      else
        i++;
    }
    s--;
    i = 0;
  }
  cout << a;
}