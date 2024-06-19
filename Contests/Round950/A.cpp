#include <iostream>

using namespace std;

int smth(string a, int rounds, int size)
{
  int frecv[8], cnt = 0;
  for (int i = 1; i <= 7; i++)
    frecv[i] = 0;
  for (int i = 0; i < size; i++)
  {
    if (a[i] == 'A')
      frecv[1]++;
    else if (a[i] == 'B')
      frecv[2]++;
    else if (a[i] == 'C')
      frecv[3]++;
    else if (a[i] == 'D')
      frecv[4]++;
    else if (a[i] == 'E')
      frecv[5]++;
    else if (a[i] == 'F')
      frecv[6]++;
    else if (a[i] == 'G')
      frecv[7]++;
  }
  while (rounds)
  {
    for (int i = 1; i <= 7; i++)
    {

      if (frecv[i] == 0)
        cnt++;
      else
        frecv[i]--;
    }
    rounds--;
  }
  return cnt;
}

int main()
{
  int i;
  cin >> i;
  int n, m;
  string a;
  while (i)
  {
    cin >> n >> m;
    cin >> a;
    cout << smth(a, m, n) << endl;
    i--;
  }
  return 0;
}