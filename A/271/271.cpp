#include <iostream>

using namespace std;

bool distinct(int a)
{
  int frec[10];
  for (int i = 0; i < 10; i++)
    frec[i] = 0;
  while (a)
  {
    int c = a % 10;
    frec[c]++;
    a /= 10;
  }
  for (int i = 0; i < 10; i++)
    if (frec[i] > 1)
      return false;
  return true;
}

int main()
{
  int a;
  cin >> a;
  a++;
  while (distinct(a) != true)
    a++;
  cout << a;
}