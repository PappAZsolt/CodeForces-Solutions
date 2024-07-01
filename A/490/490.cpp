#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> x(5000);
  vector<vector<int>> a(5000, vector<int>(3));
  for (int i = 0; i < n; i++)
    cin >> x[i];

  sort(x.begin(), x.begin() + n);
  int rows = 0, col = 0, maxRows = 0;
  for (int i = 0; i < n; i++)
  {
    if (x[i] == 2)
      col = 1, rows = 0;
    else if (x[i] == 3)
      col = 2, rows = 0;
    a[rows][col] = i + 1;
    rows++;
    if (rows > maxRows)
      maxRows = rows;
  }
  for (int i = 0; i <= maxRows; i++)
  {
    for (int j = 0; j <= 2; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
}