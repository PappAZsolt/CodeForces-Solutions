#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

bool isStrictlyGreatestAmongNeighbors(const vector<vector<int>> &matrix, int i, int j, int a, int b)
{
  int current = matrix[i][j];

  vector<pair<int, int>> neighbors = {{i - 1, j}, {i, j + 1}, {i + 1, j}, {i, j - 1}, {i - 1, j - 1}};

  for (auto [ni, nj] : neighbors)
  {
    if (ni >= 0 && ni < a && nj >= 0 && nj < b)
    {
      if (matrix[ni][nj] >= current)
      {
        return false;
      }
    }
  }
  return true;
}

void setToMaxNeighbor(vector<vector<int>> &matrix, int i, int j, int a, int b)
{
  while (isStrictlyGreatestAmongNeighbors(matrix, i, j, a, b))
  {

    int maxNeighbor = INT_MIN;
    vector<pair<int, int>> neighbors = {{i - 1, j}, {i, j + 1}, {i + 1, j}, {i, j - 1}, {i - 1, j - 1}};

    for (auto [ni, nj] : neighbors)
    {
      if (ni >= 0 && ni < a && nj >= 0 && nj < b)
      {
        maxNeighbor = max(maxNeighbor, matrix[ni][nj]);
      }
    }

    matrix[i][j] = maxNeighbor;
  }
}

void calc()
{
  int a, b;
  cin >> a >> b;
  vector<vector<int>> v(a, vector<int>(b));
  for (int i = 0; i < a; i++)
    for (int j = 0; j < b; j++)
      cin >> v[i][j];

  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      setToMaxNeighbor(v, i, j, a, b);
    }
  }

  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
      cout << v[i][j] << " ";
    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    calc();
  }
  return 0;
}
