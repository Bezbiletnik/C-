#include <iostream>

int main (int argc, char *argv[])
{
  int height, width;
  std::cout << "Enter the height of rectangle: ";
  std::cin >> height;
  std::cout << "Enter the width of rectangle: "; 
  std::cin >> width;
  
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < width; j++) std::cout << "*";
    std::cout << "\n"; 
  }
  return 0;
}
