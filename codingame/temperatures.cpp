#include <iostream>

int main (int argc, char *argv[])
{
  int min = 0;
  int n;
  std::cin >> n; std::cin.ignore();
  for (int i = 0; i < n; i++)
  {
    int t;
    std::cin >> t; std::cin.ignore();

    if (abs(t) < abs(min) || min == 0) min = t;
    else if (abs(t) == abs(min))
    {
      if (t == min && t < 0) min = t;
      else min = abs(t);
    }
  }
  std::cout << min << std::endl;
}
