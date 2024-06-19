#include <cstring>
#include <iostream>

using namespace std;
int letters[27];

int main()
{
  int n;
  cin >> n;
  string a;
  cin >> a;

  if (n < 26)
    cout << "NO";
  else
  {
    for (int i = 0; i < a.size(); i++)
    {
      letters[tolower(a[i]) - 'a']++;
    }
    for (int i = 0; i <= 25; i++)
      if (letters[i] == 0)
      {
        cout << "NO";
        return 0;
      }
    cout << "YES";
  }
}