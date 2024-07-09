#include <iostream>

using namespace std;

int sol(int n, int x)
{
  int cnt = 2, floor = 1;
  while (cnt < n)
  {
    cnt += x;
    floor++;
  }
  return floor;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    cout << sol(a, b) << endl;
  }
}