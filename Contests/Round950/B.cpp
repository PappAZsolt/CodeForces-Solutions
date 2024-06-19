
#include <iostream>

using namespace std;

int smth(int n, int k, int f)
{
  int a[101], number, cnt = 0, cntSame = 0, poz;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    if (i == f)
    {
      number = a[i];
      poz = i;
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (a[i] > number and i != poz)
      cnt++;
    if (a[i] == number and i != poz)
      cntSame++;
  }

  if (cnt >= k)
    return 1;
  if (cnt + cntSame < k)
    return -1;
  if (cnt + cntSame >= k)
    return 0;
}
int main()
{
  int f;
  cin >> f;
  while (f)
  {
    int n, m, k;
    cin >> n >> m >> k;
    int response = smth(n, k, m);
    if (response == 0)
      cout << "MAYBE\n";
    else if (response == 1)
      cout << "NO\n";
    else if (response == -1)
      cout << "YES\n";
    f--;
  }
  return 0;
}