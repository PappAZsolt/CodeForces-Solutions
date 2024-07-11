#include <iostream>
#include <vector>

using namespace std;

// FREQUENCY METHOD

void solve()
{
  char x = 0;
  vector<int> freq(4, 0);
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
    {
      cin >> x;
      if (x != '?')
        freq[x - 'A']++;
    }
  for (int i = 0; i <= 2; i++)
    cout << i << " " << endl;
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