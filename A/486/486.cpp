#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  long long n, s = 0;
  cin >> n;
  cout << ((n % 2) == 0 ? n / 2 : ((n + 1) / 2) * (-1));
}