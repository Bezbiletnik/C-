#include <vector>
using namespace std;

// My solution O(n^2), O(1)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i=0; i < nums.size(); i++)
        {
            for (int j=i+1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j] && i < j) count++;
            }
        }
        return count;
    }
};

// Solution from discuss O(n), O(n)
class Solution1 {
  public:
    int numIdenticalPairs(vector<int>& nums) {
      int mem[101] = {0}; // Since we have only 100 numbers by definition
      int sum = 0;

      for (int i=0; i< nums.size(); i++)
      {
        sum += mem[nums[i]];
        ++mem[nums[i]];
      }

      return sum;
    }
    
};

