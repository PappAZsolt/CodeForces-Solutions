#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  int n, cnt;
  cin >> n;
  cnt = n;
  double sum;
  while (cnt)
  {
    double x;
    cin >> x;
    sum += x;
    cnt--;
  }
  cout << fixed << setprecision(4) << sum / n;
}