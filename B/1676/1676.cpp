#include <climits>

#include <iostream>
#include <vector>

using namespace std;

int candies(int n)
{
  vector<int> friends;
  int smallest = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x < smallest)
      smallest = x;
    friends.push_back(x);
  }
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (friends[i] > smallest)
      cnt += friends[i] - smallest;
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    cout << candies(x) << endl;
  }
}