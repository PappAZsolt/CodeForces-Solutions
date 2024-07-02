#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    vector<int> freq(27, 0);
    cin >> len;
    string word;
    bool sus = false;
    cin >> word;
    for (int i = 0; i < len; i++)
    {
      if (freq[word[i] - 'A'] == 0)
        freq[word[i] - 'A']++;
      else if (freq[word[i] - 'A'] != 0 && word[i - 1] != word[i])
      {
        sus = true;
        break;
      }
    }

    if (sus == true)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}