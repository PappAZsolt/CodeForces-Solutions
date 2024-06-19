#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, minVal = 101, maxVal = 0, minPoz = 0, maxPoz = 0;
  cin >> n;
  vector<int> a(101);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] <= minVal)
    {
      minVal = a[i];
      minPoz = i;
    }

    if (a[i] > maxVal)
    {
      maxVal = a[i];
      maxPoz = i;
    }
  }

  cout << maxPoz + (n - 1 - minPoz) - (minPoz < maxPoz ? 1 : 0) << endl;
}