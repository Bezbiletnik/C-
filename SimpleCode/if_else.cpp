#include <iostream>

int main (int argc, char *argv[])
{
  bool isRain;
  std::cout << "Do you want it to rain? (1-Yes/Else-No)" << std::endl;
  std::cin >> isRain;
  if (isRain)
  {
    std::cout << "You entered in if statment" << std::endl;
  }
  else
  {
    std::cout << "You can't" << std::endl;
  }
  return 0;
}
