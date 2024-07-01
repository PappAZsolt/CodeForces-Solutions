#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// NOT DONE

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    vector<int> a(4);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.begin() + 3);
    cout << a[1] << endl;
  }
}