#include <iostream>
#include <string>

using namespace std;

int plusX(string x)
{
  return (x[0] - '0') + (x[2] - '0');
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string x;
    cin >> x;
    cout << plusX(x) << endl;
  }
}