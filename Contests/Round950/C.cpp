#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

string canTransform(int n, vector<int> &a, vector<int> &b, int m, vector<int> &d)
{
  vector<int> reqChange;
  unordered_map<int, int> modificationCount;

  for (int i = 0; i < n; ++i)
  {
    if (a[i] != b[i])
    {
      reqChange.push_back(b[i]);
    }
  }

  for (int i = 0; i < m; ++i)
  {
    modificationCount[d[i]]++;
  }

  sort(reqChange.begin(), reqChange.end());

  for (int value : reqChange)
  {
    if (modificationCount[value] > 0)
    {
      modificationCount[value]--;
    }
    else
    {
      return "NO";
    }
  }

  return "YES";
}

int main()
{
  int t;
  cin >> t;

  vector<string> results;

  for (int i = 0; i < t; ++i)
  {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int j = 0; j < n; ++j)
    {
      cin >> a[j];
    }
    for (int j = 0; j < n; ++j)
    {
      cin >> b[j];
    }

    int m;
    cin >> m;
    vector<int> d(m);
    for (int j = 0; j < m; ++j)
    {
      cin >> d[j];
    }

    cout << canTransform(n, a, b, m, d) << endl;
  }

  return 0;
}
