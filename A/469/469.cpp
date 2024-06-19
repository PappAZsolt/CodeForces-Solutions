#include <iostream>

using namespace std;

int levels[101];

int main()
{
  int n;
  cin >> n;
  int a;
  cin >> a;
  while (a)
  {
    int x;
    cin >> x;
    levels[x]++;
    a--;
  }
  int b;
  cin >> b;
  while (b)
  {
    int x;
    cin >> x;
    levels[x]++;
    b--;
  }
  for (int i = 1; i <= n; i++)
  {
    if (levels[i] == 0)
    {
      cout << "Oh, my keyboard!" << endl;
      return 0;
    }
  }
  cout << "I become the guy.";
}