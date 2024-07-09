#include <iostream>
#include <string>

using namespace std;

bool isLetter(char x)
{
  return (x >= 97 && x <= 122);
}

string testcases(int len)
{
  string word;
  for (int i = 0; i < len; i++)
  {
    char x;
    cin >> x;
    if (isLetter(x))
      word += x;
  }
  return word;
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    cout << testcases(64) << endl;
  }
}