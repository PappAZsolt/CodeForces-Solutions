#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string x;
    cin >> x;
    int sumFirst = 0, sumLast = 0;
    for (int i = 0; i < 3; i++)
    {
      sumFirst += (x[i] - '0');
      sumLast += (x[5 - i] - '0');
    }
    if (sumFirst == sumLast)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}