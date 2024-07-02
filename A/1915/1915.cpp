#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    vector<int> freq(10, 0);
    int a, b, c;
    cin >> a >> b >> c;
    freq[a]++;
    freq[b]++;
    freq[c]++;
    for (int i = 0; i <= 9; i++)
      if (freq[i] == 1)
      {
        cout << i << endl;
        break;
      }
  }
}