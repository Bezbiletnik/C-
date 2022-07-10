#include <iostream>

int main (int argc, char *argv[])
{
  std::cout << "Enter the range: ";
  int range, sum = 0;
  std::cin >> range;
  for (int i=0; i<range; i++) if (i % 2 == 1) sum += i;
  std::cout << "The sum of all odd numbres in that range is: " << sum << std::endl;
  return 0;
}
