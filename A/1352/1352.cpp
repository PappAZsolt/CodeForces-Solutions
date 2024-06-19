#include <cmath>
#include <iostream>

using namespace std;

void calc(int n)
{
  int log = log10(n);
  int aux = n;
  int cnt = 0;
  while (aux)
  {
    if (aux % 10 != 0)
      cnt++;
    aux /= 10;
  }
  cout << cnt << endl;
  while (log >= 0)
  {
    int power = pow(10, log);
    int num = (n / power) % 10;
    if (num != 0)
      cout << num * power << " ";
    log--;
  }
  cout << endl;
}
int main()
{
  int n;
  cin >> n;
  while (n)
  {
    int x;
    cin >> x;
    calc(x);
    n--;
  }
}