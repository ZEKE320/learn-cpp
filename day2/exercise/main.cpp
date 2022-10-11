#include <iostream>

using namespace std;

bool isPositive(int);

int main(int argc, char const *argv[])
{
  int num;

  cout << "--- 問題 2-1 ---" << endl;
  cout << "整数を入力: ";
  cin >> num;

  if (isPositive(num))
  {
    cout << "0より大きい" << endl;
  }
  else
  {
    cout << "0以下" << endl;
  }
  cout << endl;

  string str;
  int times;
  cout << "--- 問題 2-2 ---" << endl;
  cout << "文字列を入力: ";
  cin >> str;
  cout << "表示回数: ";
  cin >> times;

  while (times > 0)
  {
    --times;
    cout << str << endl;
  }

  return 0;
}

bool isPositive(int num)
{
  if (num > 0)
  {
    return true;
  }
  return false;
}