#include <iostream>
#include <vector>

using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long prev;
  long long counter = 1, maxCounter = 1;
  cin >> prev;
  n--;
  while (n--)
  {
    long long current;
    cin >> current;
    if (prev < current)
      counter++;
    else
      counter = 1;
    prev = current;
    if (counter > maxCounter)
      maxCounter = counter;
  }
  cout << maxCounter << endl;
}