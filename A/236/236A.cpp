#include <iostream>

using namespace std;

int freq[27];

int main()
{
  string a;
  cin >> a;
  int cnt = 0;
  for (int i = 0; i < a.size(); i++)
  {
    freq[a[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] != 0)
      cnt++;
  }

  if (cnt % 2 == 0)
    cout << "CHAT WITH HER!" << endl;
  else
    cout << "IGNORE HIM!" << endl;
}