#include <iostream>

int countdown(int i)
{
  if (i <= 0) return
  std::cout << i << std::endl;
  countdown(i - 1);
}
int main (int argc, char *argv[])
{
  countdown(3);
  return 0;
}
