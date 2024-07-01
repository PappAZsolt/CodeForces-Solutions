#include <iostream>
#include <vector>

using namespace std;

vector<bool> mark(1000000, 0);

void markComposite()
{
  for (int i = 4; i <= 1000000; i += 2)
    mark[i] = 1;
  for (int i = 6; i <= 1000000; i += 3)
    mark[i] = 1;
}

int main()
{
  int n;
  cin >> n;
  markComposite();
  for (int i = 4; i <= n - 4; i++)
  {
    if (mark[i] == 1 && mark[n - i] == 1)
    {
      cout << i << " " << n - i << endl;
      return 0;
    }
  }
}