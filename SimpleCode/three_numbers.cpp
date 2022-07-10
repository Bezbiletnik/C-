#include <iostream>

int main (int argc, char *argv[])
{
  int number1, number2, number3;
  std::cout << "\nEnter three numbers: "; 
  std::cin >> number1 >> number2 >> number3;
  int sum = number1 + number2 + number3;
  int multiplycation = number1 * number2 * number3;
  float mean = (float) sum / 3;
  std::cout << "\n"
    "Sum is: " << sum << "\n" <<
    "Multiplycation is: " << multiplycation << "\n" <<
    "Mean is: " << mean
    << "\n\n";
  return 0;
}
