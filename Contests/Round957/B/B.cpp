#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solve(int n, int k)
{
  int cnt = 0, maxElem = 1, pos = 0;
  vector<int> arr(k);
  for (int i = 0; i < k; i++)
  {
    cin >> arr[i];
    if (arr[i] == 1)
      cnt++;
    if (arr[i] > maxElem)
    {
      maxElem = arr[i];
      pos = i;
    }
  }
  for (int i = 0; i < k; i++)
  {
    if (pos != i && arr[i] != 1)
      cnt += (arr[i] - 1) + arr[i];
  }
  if (maxElem != 1)
    return cnt;
  return cnt - 1;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
  }
}