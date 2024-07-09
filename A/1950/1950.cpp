#include <iostream>
#include <string>

using namespace std;

string decision(int a, int b, int c)
{
  if (a < b && b < c)
    return "STAIR\n";
  if (a < b && b > c)
    return "PEAK\n";
  return "NONE\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    cout << decision(a, b, c);
  }
}