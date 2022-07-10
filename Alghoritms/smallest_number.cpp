#include <iostream>
#include <vector>

using namespace std;

int findSmallest(vector<int> arr)
{
  int smallest_number = arr[0], smallest_index = 0;
  for (int i=0; i < arr.size(); i++)
  {
    if (arr[i] < smallest_number)
    {
      smallest_number = arr[i];
      smallest_index = i;
    }
  }
  return smallest_index;
}

int main (int argc, char *argv[])
{
  vector<int> arr{1, 2, 3, 4, 0, 5, 10};
  cout << "Smallest number at index: " << findSmallest(arr) << "\n";
  return 0;
}

