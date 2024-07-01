#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int teams = 0, cnt = 0;
  while (n--)
  {
    int x;
    cin >> x;
    if (x + k <= 5)
      cnt++;
    if (cnt == 3)
    {
      teams++;
      cnt = 0;
    }
  }
  cout << teams << endl;
}