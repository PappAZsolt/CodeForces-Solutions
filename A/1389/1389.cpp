#include <iostream>

using namespace std;

void solve(int a, int b)
{
  if (a * 2 <= b)
    cout << a << " " << a * 2 << endl;
  else
    cout << -1 << " " << -1 << endl;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    solve(a, b);
  }
}