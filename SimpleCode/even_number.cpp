#include <iostream>

int main (int argc, char *argv[])
{
  std::cout << "Enter the namber: ";
  int answer;
  std::cin >> answer;
  if (answer % 2 == 0)
  {
    std::cout << "The number is even" << std::endl;
  }
  else
  {
    std::cout << "The namber is odd" << std::endl;
  }
  return 0;
}
