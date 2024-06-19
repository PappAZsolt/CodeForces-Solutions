#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n)
  {
    vector<int> num(4);
    cin >> num[1] >> num[2] >> num[3];
    sort(num.begin() + 1, num.end());
    if (num[1] + num[2] == num[3])
      cout << "YES\n";
    else
      cout << "NO\n";
    n--;
  }
}