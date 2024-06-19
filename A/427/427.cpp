#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int crime = 0, cnt = 0;
  bool start = false;
  while (n)
  {
    int x;
    cin >> x;
    if (x == -1 && start == false)
      crime += x;
    else if (x == -1 && start == true)
    {
      cnt--;
    }
    else
    {
      cnt += x;
      start = true;
    }
    if (cnt == 0 and start == true)
      start = false;
    n--;
  }
  cout << abs(crime) << endl;
}