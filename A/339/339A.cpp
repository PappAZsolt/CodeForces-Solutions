#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int frecv[5];

int main()
{
  string a;
  cin >> a;
  for (int i = 0; i < a.size(); i++)
  {
    if (isdigit(a[i]))
    {
      int digit = a[i] - '0';
      frecv[digit]++;
    }
  }
  bool trap = true;
  for (int i = 1; i <= 3; i++)
  {
    if (trap == true and frecv[i] != 0)
    {
      trap = false;
      cout << i;
      frecv[i]--;
    }
    if (trap == false)
    {
      while (frecv[i] > 0)
      {
        cout << "+" << i;
        frecv[i]--;
      }
    }
  }
  return 0;
}