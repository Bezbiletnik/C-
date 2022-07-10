#include <iostream>
#include <vector>

int search(int item, std::vector<int> &numbers)
{
  int head = 0, tail = numbers.size() - 1;
  while (head <= tail)
  {
    int mid = (head + tail) / 2;
    if (numbers[mid] < item) head = mid + 1;
    else if (numbers[mid] == item)
    {
      std::cout << "Number was found!" <<
        "Number inbex is: " << mid << std::endl;
      return 0;
    }
    else tail = mid - 1;
  }
  
  std::cout << "Number is not in array!" << std::endl;
  return 0;
}

int main (int argc, char *argv[])
{
  int number = 72;
  std::vector<int> vect;
  for (int i = 0; i<100; i++) vect.push_back(i+1);

  search(number, vect);
  return 0;
}
