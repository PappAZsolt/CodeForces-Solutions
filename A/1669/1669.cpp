#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    if (x >= 1900)
      cout << "Division 1\n";
    else if (x >= 1600 && x <= 1899)
      cout << "Division 2\n";
    else if (x >= 1400 && x <= 1599)
      cout << "Division 3\n";
    else
      cout << "Division 4\n";
  }
}