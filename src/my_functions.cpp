#include "my_functions.h"
#include <iostream>  // std::cout
#include <algorithm> // std::sort
#include <vector>    // std::vector
#include <unordered_map>
bool myFunction2(std::vector<int> &nums)
{
  std::sort(nums.begin(), nums.end());
  // print out content:
  bool first = true;
  bool retrnvalue = false;
  for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
  {
    if (first == false)
    {
      int x = *it;
      --it;
      int y = *it;
      ++it;
      if (x == y)
        retrnvalue = true;
    }
    else
    {
      first = false;
    }
  }
  return retrnvalue;
}

bool myFunction(std::vector<int> &nums, int target)
{
  std::unordered_map<int, int> hashmap;
  std::vector<int> result;
  for (int i = 0; i < nums.size(); i++)
  {
    int complement = target - nums[i];
        
  }
  return true;
}
