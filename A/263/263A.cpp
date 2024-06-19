#include <iostream>

using namespace std;

int main()
{
  int x;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> x;
      if (x == 1)
      {
        cout << abs(i + 1 - 3) + abs(j + 1 - 3);
        return 0;
      }
    }
  }
}