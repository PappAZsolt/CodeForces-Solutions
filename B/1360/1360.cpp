#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int smallest(int x)
{
  vector<int> ath(51);
  for (int i = 0; i < x; i++)
    cin >> ath[i];
  int small = 1001;
  for (int i = 0; i < x; i++)
  {
    for (int j = i + 1; j < x; j++)
      if (abs(ath[i] - ath[j]) < small)
        small = abs(ath[i] - ath[j]);
  }
  return small;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    cout << smallest(x) << endl;
  }
}