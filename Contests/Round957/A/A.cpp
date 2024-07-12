#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
  vector<int> arr(4);
  cin >> arr[0] >> arr[1] >> arr[2];
  int cnt = 5;
  while (cnt--)
  {
    sort(arr.begin(), arr.end() - 1);
    arr[0]++;
  }
  cout << arr[0] * arr[1] * arr[2] << endl;
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