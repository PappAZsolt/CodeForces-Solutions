#include <iostream>

using namespace std;

string decision(int n)
{
  if (n % 2 != 0)
    return "Ehab\n";
  return "Mahmoud\n";
}

int main()
{
  int n;
  cin >> n;
  cout << decision(n);
}