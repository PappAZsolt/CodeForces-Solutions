#include <iostream>
#include <string>

using namespace std;

string AorB(string x)
{
  int A = 0, B = 0;
  for (int i = 0; i < 5; i++)
  {
    if (x[i] == 'A')
      A++;
    else
      B++;
  }
  if (A > B)
    return "A\n";
  return "B\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string x;
    cin >> x;
    cout << AorB(x);
  }
}