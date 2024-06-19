#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, cntA = 0, cntD = 0;
  string a;
  cin >> n;
  cin >> a;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 'A')
      cntA++;
    else
      cntD++;
  }
  if (cntA == cntD)
    cout << "Friendship";
  else if (cntA > cntD)
    cout << "Anton";
  else
    cout << "Danik";
}