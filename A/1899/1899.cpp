#include <iostream>

using namespace std;

void testcase()
{
  int x;
  cin >> x;
  if (x % 3 == 0)
    cout << "Second\n";
  else
    cout << "First\n";
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