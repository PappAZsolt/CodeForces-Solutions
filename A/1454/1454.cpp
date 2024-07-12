#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int tt;
  cin >> tt;
  while (tt--)
  {
    int len;
    cin >> len;
    vector<int> arr;
    for (int i = len; i > 0; i--)
      arr.push_back(i);
    for (int i = 0; i < len; i++)
      if (arr[i] == i + 1)
        swap(arr[i], arr[i + 1]);
    for (int i = 0; i < len; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
}