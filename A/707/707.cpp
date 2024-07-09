#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  string type = "#Black&White\n";
  vector<vector<char>> mat(100, vector<char>(100));
  for (int i = 0; i < a; i++)
    for (int j = 0; j < b; j++)
    {
      cin >> mat[i][j];
      if (mat[i][j] != 'B' && mat[i][j] != 'W' && mat[i][j] != 'G')
        type = "#Color\n";
    }
  cout << type;
}