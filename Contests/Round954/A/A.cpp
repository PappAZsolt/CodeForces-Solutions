#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void calc()
{
  vector<int> a(4);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end() - 1);
  cout << abs(a[0] - a[1]) + abs(a[1] - a[1]) + abs(a[2] - a[1]) << endl;
}

int main()
{
  int n;
  cin >> n;
  while (n)
  {
    calc();
    n--;
  }
  return 0;
}