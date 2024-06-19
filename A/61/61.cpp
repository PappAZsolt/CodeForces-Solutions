#include <bitset>
#include <iostream>

using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;
  string result;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] != b[i])
      result += '1';
    else
      result += '0';
  }

  cout << result;
}