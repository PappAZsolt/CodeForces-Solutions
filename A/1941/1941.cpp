#include <iostream>
#include <vector>

using namespace std;

int solve(int len1, int len2, int k)
{
  vector<int> a(len1), b(len2);
  for (int i = 0; i < len1; i++)
    cin >> a[i];
  for (int i = 0; i < len2; i++)
    cin >> b[i];
  int cnt = 0;
  for (int i = 0; i < len1; i++)
  {
    for (int j = 0; j < len2; j++)
      if (a[i] + b[j] <= k)
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
    int len1, len2, k;
    cin >> len1 >> len2 >> k;
    cout << solve(len1, len2, k) << endl;
  }
}