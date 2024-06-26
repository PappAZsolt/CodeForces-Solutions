#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void calc()
{
  int n;
  cin >> n;
  vector<int> a(51);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  while (n > 1)
  {
    for (int i = 0; i < n - 2; i++)
      if (abs(a[i] - a[n - 1]) <= 1)
      {
        if (a[i] < a[n])
          a.erase(a.begin() + i);
        else
          a.erase(a.begin() + n - 1);
      }
    n--;
  }
}

int main()
{
}