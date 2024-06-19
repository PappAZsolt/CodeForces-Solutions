#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int m2 = 2, m4 = 4;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= b; j++)
    {
      if (i % 2 == 1)
        cout << '#';
      else if (i % m4 == 0 && j == 1)
        cout << '#', m4 += 4;
      else if (i % m2 == 0 && j == b)
        cout << '#', m2 += 4;
      else
        cout << '.';
    }

    cout << endl;
  }
}