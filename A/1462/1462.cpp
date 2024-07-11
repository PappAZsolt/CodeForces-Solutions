#include <iostream>
#include <vector>
using namespace std;

void solve(int len)
{
  vector<int> arr(len);
  for (int i = 0; i < len; i++)
    cin >> arr[i];
  for (int i = 0; i < len / 2; i++)
    cout << arr[i] << " " << arr[len - i - 1] << " ";
  if (len % 2 != 0)
    cout << arr[len / 2];
  cout << endl;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    solve(len);
  }
}