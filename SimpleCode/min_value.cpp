#include <vector>
#include <iostream>

int main (int argc, char *argv[])
{
  std::vector<int> arr{1, 2, 3, 4, 0, 5};
  int min = arr[0];
  for (int i=0; i<arr.size(); i++) if (arr[i] < min) min = i;
  std::cout << "The smallest number in the array is: " << arr[min]<< std::endl;
  std::cout << "The index of the smallest number is: " << min << std::endl;
  return 0;
}
