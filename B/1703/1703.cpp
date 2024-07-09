#include <iostream>
#include <string>
#include <vector>

using namespace std;

int baloons(int n)
{
  string x;
  cin >> x;
  vector<bool> solved(27, 0);
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (solved[x[i] - 'A'] == 0)
    {
      cnt += 2;
      solved[x[i] - 'A'] = 1;
    }
    else
      cnt++;
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    cout << baloons(x) << endl;
  }
}