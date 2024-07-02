#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int mis = 0, chris = 0;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    if (a > b)
      mis++;
    else if (b > a)
      chris++;
  }

  if (mis > chris)
    cout << "Mishka\n";
  else if (chris > mis)
    cout << "Chris\n";
  else
    cout << "Friendship is magic!^^\n";
}