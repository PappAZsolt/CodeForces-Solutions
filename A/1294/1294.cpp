#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string distribute()
{
  vector<int> arr(4);
  int sum;
  cin >> arr[0] >> arr[1] >> arr[2] >> sum;
  sort(arr.begin(), arr.begin() + 3);
  sum = sum - ((arr[2] - arr[0]) + (arr[2] - arr[1]));

  if ((sum == 0 || sum % 3 == 0) && sum >= 0)
    return "YES\n";
  return "NO\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    cout << distribute();
  }
}