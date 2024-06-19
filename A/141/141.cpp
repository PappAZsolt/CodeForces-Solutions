#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string a, b, c;
  cin >> a >> b >> c;

  vector<int> freq(27, 0);

  for (int i = 0; i < a.size(); i++)
    freq[a[i] - 'A']++;
  for (int i = 0; i < b.size(); i++)
    freq[b[i] - 'A']++;

  vector<int> freq2(27, 0);
  for (int i = 0; i < c.size(); i++)
    freq2[c[i] - 'A']++;
  for (int i = 0; i < 27; i++)
  {
    if (freq[i] != freq2[i])
    {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}