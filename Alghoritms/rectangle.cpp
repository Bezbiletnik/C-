#include <iostream>

int main (int argc, char *argv[])
{
  std::cout << "\nEnter the heigth of rectangle: ";
  int heigth;
  std::cin >> heigth;
  std::cout << "Enter the width of rectangle: "; 
  int width;
  std::cin >> width;
  std::cout << "\n";
  for (int i = 0; i < heigth; i++) {
    for (int j = 0; j < width; j++) {
      std::cout << "*";
    } 
    std::cout << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
