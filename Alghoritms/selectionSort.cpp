#include <vector>
#include <iostream>

int findSmallest(std::vector<int> arr)
{
  int smallestNumber = arr[0], smallestIndex = 0;
  for (int i=0; i<arr.size(); i++)
  {
    if (arr[i] < smallestNumber)
    {
      smallestNumber = arr[i];
      smallestIndex = i;
    }
  }
  return smallestIndex;
}

int selectionSort(std::vector<int> arr)
{
  std::vector<int> newArr;
  for (int i=0; i<arr.size(); i++)
  {
    auto smallest = findSmallest(arr);
    newArr.push_back(arr.erase(smallest));
  }
}

int main (int argc, char *argv[])
{
  
  return 0;
}
