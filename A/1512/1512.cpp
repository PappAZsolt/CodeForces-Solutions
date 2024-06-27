#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    vector<pair<int, int>> freq(101, make_pair(0, 0));
    vector<int> arr(101);
    for (int i = 0; i < x; i++)
    {
      cin >> arr[i];
      freq[arr[i]].first++;
      freq[arr[i]].second = i + 1;
    }
    for (int i = 0; i < 101; i++)
      if (freq[i].first == 1)
      {
        cout << freq[i].second << endl;
        break;
      }
  }
}