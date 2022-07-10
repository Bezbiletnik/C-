#include <iostream>

int search(int item, int numbers[],int size)
{
  int head = 0, tail = size - 1;
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
  int number = 72, size = 100;
  int arr[100];
  for (int i = 0; i<100; i++) arr[i] = i+1;

  search(number, arr, size);
  return 0;
}
