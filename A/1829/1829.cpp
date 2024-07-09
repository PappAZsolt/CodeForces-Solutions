#include <iostream>
#include <string>

using namespace std;

string a = "codeforces";

int dif(string b)
{
  int cnt = 0;
  for (int i = 0; i < 10; i++)
  {
    if (b[i] != a[i])
      cnt++;
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string x;
    cin >> x;
    cout << dif(x) << endl;
  }
}