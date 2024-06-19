#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int s = 0;
  string bit;
  while (n)
  {
    cin >> bit;
    if (bit[0] == '+' or bit[bit.size() - 1] == '+')
      s++;
    else
      s--;
    n--;
  }
  cout << s;
}