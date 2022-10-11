#include <iostream>

using namespace std;

bool checkNumber(int);
bool checkStr(string);

int main(int argc, char const *argv[])
{
  int num;

  cout << "--- 例題 2-1 ---" << endl;
  cout << "整数値を入力: ";
  cin >> num;

  if (checkNumber(num))
  {
    cout << num << "は偶数です。" << endl;
  }
  cout << endl;

  string str;

  cout << "--- 例題 2-2 ---" << endl;
  cout << "Helloと入力: ";
  cin >> str;
  if (checkStr(str))
  {
    cout << "OK!" << endl;
  }
  else
  {
    cout << "NG!" << endl;
  }

  return 0;
}

bool checkNumber(int num)
{
  if (num % 2 == 0)
  {
    return true;
  }
  return false;
}

bool checkStr(string str)
{
  if (str == "Hello")
  {
    return true;
  }
  return false;
}