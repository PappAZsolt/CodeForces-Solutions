#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string a;
  vector<int> freq(27, 0);
  getline(cin, a);

  for (int i = 0; i < a.length(); i++)
  {

    if (a[i] >= 'a' and a[i] <= 'z')
    {
      freq[a[i] - 'a']++;
    }
  }
  int cnt = 0;
  for (int i = 0; i < 27; i++)
  {
    if (freq[i] > 0)
      cnt++;
  }
  cout << cnt;
}