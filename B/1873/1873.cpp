#include <iostream>
#include <vector>

using namespace std;

int product(int len)
{
  vector<int> present(10);
  int smallest = 10, pos = 0;
  for (int i = 0; i < len; i++)
  {
    cin >> present[i];
    if (present[i] < smallest)
    {
      smallest = present[i];
      pos = i;
    }
  }
  int sum = 1;
  for (int i = 0; i < len; i++)
  {
    if (i == pos)
      sum *= present[i] + 1;
    else
      sum *= present[i];
  }
  return sum;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    cout << product(len) << endl;
  }
}