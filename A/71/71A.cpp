#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string h[101];
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    int lenS = s.size();
    if (lenS <= 10)
      h[i] = s;
    else
    {
      h[i] = s[0];
      h[i] += to_string(lenS - 2);
      h[i] += s[lenS - 1];
    }
  }
  for (int i = 0; i < n; i++)
    cout << h[i] << endl;
}