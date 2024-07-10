#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

void testcase()
{
  pair<int, int> cord[5];
  for (int i = 0; i < 4; i++)
    cin >> cord[i].first >> cord[i].second;
  sort(cord, cord + 4);
  int s = cord[0].second - cord[1].second;
  cout << s * s << endl;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    testcase();
  }
}