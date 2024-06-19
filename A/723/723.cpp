#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> a(4);
  for (int i = 0; i < 3; i++)
    cin >> a[i];
  sort(a.begin(), a.end() - 1);
  cout << a[1] - a[0] + a[2] - a[1];
}