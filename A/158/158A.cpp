#include <iostream>

using namespace std;

int main()
{
  int n, k, s = 0;
  cin >> n >> k;
  int a[51];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int num = a[k - 1];
  for (int i = 0; i < n; i++)
    if (a[i] >= num and a[i] > 0)
      s++;
  cout << s;
}