#include <iostream>
#include <ostream>

int main (int argc, char *argv[])
{
  std::cout << "What line do you want?" << std::endl;
  std::cout <<
    "\n1: horizontal" << 
    "\n2: Vertical\n" << std::endl;
  
  int variant;
  std::cin >> variant;
  std::cout << "The length will be: ";
  int length;
  std::cin >> length;
  
  switch (variant) {
  case 1:
    for (int i = 0; i < length; ++i)
    {
      std::cout << "-";
    }
    std::cout << "\n";
    break;
  case 2:
    for (int i = 0; i < length; ++i)
    {
      std::cout << "|" << std::endl;
    }
    break;
  default:
    std::cout << "Enter the correct answer!" << std::endl;
  }
  return 0;
}
