#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int cnt = 0;
  while (n)
  {
    string x;
    cin >> x;
    if (x == "Icosahedron")
      cnt += 20;
    else if (x == "Tetrahedron")
      cnt += 4;
    else if (x == "Cube")
      cnt += 6;
    else if (x == "Octahedron")
      cnt += 8;
    else if (x == "Dodecahedron")
      cnt += 12;
    n--;
  }
  cout << cnt;
}