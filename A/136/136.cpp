#include <iostream>

using namespace std;

int main()
{
  int n, a[101];
  int cpy[101];
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    cpy[a[i]] = i;
  }
  for (int i = 1; i <= n; i++)
    cout << cpy[i] << " ";
}