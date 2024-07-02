#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, maxElem = 0, minElem = INT_MAX;
    cin >> a;
    vector<int> v(51);
    for (int i = 0; i < a; i++)
    {
      cin >> v[i];
      if (v[i] > maxElem)
      {
        maxElem = v[i];
      }
      if (v[i] < minElem)
      {
        minElem = v[i];
      }
    }

    cout << maxElem - minElem << endl;
  }
}