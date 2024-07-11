#include <iostream>
#include <vector>

using namespace std;

// EASIER WAY

void solve()
{
  int x;
  vector<vector<char>> arr(3, vector<char>(3));
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
      if (arr[i][j] == '?')
      {
        x = i;
      }
    }
  int A = 0, B = 0, C = 0;
  for (int j = 0; j < 3; j++)
  {
    if (arr[x][j] == 'A')
      A++;
    else if (arr[x][j] == 'B')
      B++;
    else if (arr[x][j] == 'C')
      C++;
  }
  if (A == 0)
    cout << "A\n";
  else if (B == 0)
    cout << "B\n";
  else
    cout << "C\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    solve();
  }
}