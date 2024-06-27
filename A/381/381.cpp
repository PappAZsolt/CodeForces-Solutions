#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(1001);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int i = 0, j = n - 1, turn = 0; // pair number = Sereja
                                  // odd number = Dima
  int ser = 0, dima = 0;
  while (i <= j)
  {
    if (turn % 2 == 0) // Sereja
    {
      if (a[i] > a[j])
      {
        ser += a[i];
        i++;
      }

      else
      {
        ser += a[j];
        j--;
      }
    }
    else if (turn % 2 == 1) // Dima
    {
      if (a[i] > a[j])
      {
        dima += a[i];
        i++;
      }
      else
      {
        dima += a[j];
        j--;
      }
    }
    turn++;
  }
  cout << ser << " " << dima << endl;
}