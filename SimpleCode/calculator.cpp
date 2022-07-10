#include <iostream>

int main (int argc, char *argv[])
{
  while (true)
  {
    int a, b;
    std::cout << "Enter two nambers: ";
    std::cin >> a >> b;
    std::cout << "Enter the operator: ";
    char oprt;
    std::cin >> oprt;
    switch (oprt) {
      case '+':
        std::cout << a + b << std::endl;
        break;
      case '-':
        std::cout << a - b << std::endl;
        break;
      case '*':
        std::cout << a * b << std::endl;
        break;
      case '/':
        std::cout << (float) a / b << std::endl;
        break;
      default:
        std::cout << "Please enter the correct operator!";
        break;
    }
  }
     return 0;
}
