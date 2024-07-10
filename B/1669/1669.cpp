#include <iostream>
#include <vector>

using namespace std;

// FREQUENCY METHOD

int testcase(int len)
{

  vector<int> freq(len + 1);

  for (int i = 1; i <= len; i++)
  {
    int x;
    cin >> x;
    freq[x]++;
  }
  if (len < 3)
    return -1;
  for (int i = 1; i <= len; i++)
    if (freq[i] >= 3)
      return i;
  return -1;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int len;
    cin >> len;
    cout << testcase(len) << endl;
  }
}