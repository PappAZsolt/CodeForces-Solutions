#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int cnt = 0;
  int x;
  cin >> x;
  n--;
  int minScore = x, maxScore = x;
  while (n)
  {
    int x;
    cin >> x;
    if (x > maxScore)
    {
      maxScore = x;
      cnt++;
    }
    if (x < minScore)
    {
      minScore = x;
      cnt++;
    }
    n--;
  }
  cout << cnt << endl;
}