#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> x;

  for (int i = 1; i <= 1666; i++)
  {
    if ((i % 3 != 0) && (i % 10 != 3))
      x.push_back(i);
  }
  while (n--)
  {
    int a;
    cin >> a;
    cout << x[a - 1] << endl;
  }
}