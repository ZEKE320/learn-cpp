#include <iostream>
#include "math.h"
#include "vector2d.h"

using namespace std;

double Vector2D::length()
{
  double length;
  length = sqrt(x * x + y * y);
  return length;
}

int main(int argc, char const *argv[])
{
  Vector2D vec;
  cout << "ベクトルのx成分: ";
  cin >> vec.x;
  cout << "ベクトルのy成分: ";
  cin >> vec.y;
  cout << "vec=(" << vec.x << "," << vec.y << ")" << endl;
  cout << "vecの長さ: " << vec.length() << endl;
  return 0;
}
