#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int upp = 0, low = 0;
  string a;
  cin >> a;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] >= 97 and a[i] <= 122)
      low++;
    else if (a[i] >= 65 and a[i] <= 90)
      upp++;
  }
  if (low >= upp)
    for (int i = 0; i < a.size(); i++)
      a[i] = tolower(a[i]);
  else
    for (int i = 0; i < a.size(); i++)
      a[i] = toupper(a[i]);
  cout << a;
}