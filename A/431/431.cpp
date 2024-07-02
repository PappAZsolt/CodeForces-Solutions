#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> cal(4, 0);
  cin >> cal[0] >> cal[1] >> cal[2] >> cal[3];

  string a;
  cin >> a;
  int sum = 0;
  for (int i = 0; i < a.size(); i++)
  {
    sum += cal[a[i] - '0' - 1];
  }
  cout << sum;
}