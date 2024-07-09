#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool increasing(int len)
{
  vector<int> arr(101);
  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.begin() + len);

  bool increase = true;
  for (int i = 1; i < len; i++)
  {
    if (arr[i - 1] >= arr[i])
      increase = false;
  }
  return increase;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    if (increasing(x) == true)
      cout << "YES\n";
    else
      cout << "NO\n";
    }
}