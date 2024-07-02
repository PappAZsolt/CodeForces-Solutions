#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    vector<pair<int, int>> even;
    vector<pair<int, int>> odd;
    vector<int> v(41);
    int len = 0, switches = 0;
    cin >> len;
    for (int i = 0; i < len; i++)
    {
      cin >> v[i];
      if (v[i] % 2 == 0 && i % 2 != 0)
        even.push_back(make_pair(v[i], i));
      else if (v[i] % 2 != 0 && i % 2 == 0)
        odd.push_back(make_pair(v[i], i));
    }
    /* for (int i = 0; i < even.size(); i++)
      cout << even[i].first << " " << even[i].second << endl;
    for (int i = 0; i < odd.size(); i++)
      cout << odd[i].first << " " << odd[i].second << endl; */
    if (even.size() != odd.size())
      cout << "-1\n";
    else
    {
      for (int i = 0; i < even.size(); i++)
      {
        swap(v[even[i].second], v[odd[i].second]);
        switches++;
      }
      cout << switches << endl;
    }
    }
}