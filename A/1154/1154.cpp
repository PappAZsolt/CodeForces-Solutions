#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vect(5);
  for (int i = 1; i <= 4; i++)
    cin >> vect[i];
  sort(vect.begin() + 1, vect.end());
  int a = vect[4] - vect[3];
  int b = vect[1] + vect[3] - vect[4];
  int c = vect[4] - vect[1];
  cout << a << " " << b << " " << c << endl;
}