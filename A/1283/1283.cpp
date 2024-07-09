#include <iostream>

using namespace std;

int remain(int h, int min)
{
  int remMin = 60 - min;
  int remH = 23 - h;
  return remH * 60 + remMin;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    cout << remain(a, b) << endl;
  }
}