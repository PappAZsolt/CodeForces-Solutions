#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> arr(101);
  int rich = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] > rich)
      rich = arr[i];
  }
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < rich)
      sum += rich - arr[i];
  }
  cout << sum << endl;
}