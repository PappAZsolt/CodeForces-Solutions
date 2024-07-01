#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string x, xFin;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
      if ((x[i] == x[i + 1]) && (i + 1) % 2 == 0)
      {
        xFin += x[i];
        i++;
      }
      else
        xFin += x[i];
    }
    cout << xFin << endl;
  }
}