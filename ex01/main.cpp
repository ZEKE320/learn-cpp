#include <stdio.h>

void showMyName(char[]);
void helloCpp();

int main(int argc, char const *argv[])
{
  char name[20];

  printf("--- Problem 1-1 ---\n");
  printf("What's your name?\n");
  printf("Type your name here: ");
  scanf("%[^\n]%*c", name);

  showMyName(name);
  printf("\n");

  printf("--- Problem 1-2 ---\n");
  int length = 3;
  for (int i = length - 1; i >= 0; i--)
  {
    helloCpp();
  }

  return 0;
}

void showMyName(char name[])
{
  printf("Hello, %s!\n", name);
}

void helloCpp()
{
  printf("HelloC++\n");
}